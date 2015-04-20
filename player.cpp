
#include "Player.h"
#include <cstdlib>
#include <iostream>
#include <GL/freeglut.h>
#include <stdio.h>
#include "PlayerMovement.h"

Player::Player()
{
    this->pos.setVec(0.0f, 0.0f, 0.0f);
    shot = false;
}



Player::Player(const Vec3f& position, const Vec3f& dir, float ms, float ts)
{
    this->pos.setVec(position);
    this->lookDir.setVec(dir);
    this->moveSpeed = ms;
    this->turnSpeed = ts;
    if(this->hasBehaviour("PlayerMovement")) {

	Behaviour* b = (this->getBehaviour("PlayerMovement"));
	PlayerMovement* movement = (PlayerMovement*)(b);
	movement->cam.setSpeed(ms, ts);
    }
    shot = false;
    p = new Pistol(position);
    // cam.setSpeed(moveSpeed, turnSpeed);
	
	

	
}

void Player::setPos(float x, float y, float z)
{
    this->pos.setVec(x, y, z);
    // cam.setPos(x, y, z);
}

Vec3f Player::getPos()
{
    return this->pos;
}

Vec3f Player::getLook()
{
    return this->lookDir;
}

int Player::getHealth()
{
    return this->health;
}

void Player::use()
{

    if(!shot) {
	shot = true;
	// PlaySound(TEXT("bullet_whizzing_by-Mike_Koenig-2005433595.wav"),NULL,SND_SYNC);
	p->fire(lookDir);
    }
}

void Player::addBehaviour(Behaviour* b)
{
    behaviours.push_back(b);
}

bool Player::hasBehaviour(std::string s)
{

    for(Behaviour* b : behaviours) {

	// if(strcmp(b->getBehaviourName(),s))
	if(s == b->getBehaviourName()) {
	    return true;
	}
    }

    return false;
}

Behaviour* Player::getBehaviour(std::string s)
{
    for(Behaviour* b : behaviours) {
	if(s == b->getBehaviourName()) {
	    return b;
	}
    }
    return nullptr;
}
/*
void Player::setHealth(int h)
{
    this->health = h;
}
*/
void Player::update()
{
    for(Behaviour* b : behaviours) {
	b->update();
    }

    if(this->hasBehaviour("PlayerMovement")) // this->hasBehaviour("Movement"))
    {
	Behaviour* b = (this->getBehaviour("PlayerMovement"));
	PlayerMovement* movement = (PlayerMovement*)(b);
	this->pos.setVec(movement->cam.getPos());
	this->lookDir.setVec(movement->cam.getLookDir());
	this->yaw = movement->cam.getYaw();
	this->pitch = movement->cam.getPitch();
	movement->cam.setSpeed(this->moveSpeed, this->turnSpeed);
    }
}

void Player::loadModel()
{
}
void Player::render()
{

    for(Behaviour* b : behaviours) {
	b->render();
    }

    glPushMatrix();
    glTranslatef(this->pos.getX(), this->pos.getY(), this->pos.getZ());

    // std::cout << "render play" << std::endl;
    //  glTranslatef(1, 0, 1); // Offset to draw the object
    glRotatef(-yaw * 57.2957795, 0, 1, 0);
    glRotatef(pitch * 57.2957795, 0, 0, 1);
    glPushMatrix();
    glTranslated(0, 0, 0.5);
    glRotated(25, 0, 1, 0);
    p->render();
    glPopMatrix();
    // drawPlayer();
    glPopMatrix();
}

void Player::drawPlayer()
{
    glColor3f(0.0f, 1.0f, 0.0f);
    glPushMatrix();
    glRotated(90, 0, 1, 0);
    glutWireCone(1, 1, 6, 6);
    glPopMatrix();
}

void Player::input()
{
    for(Behaviour* b : behaviours) {
	b->input();
    }
}
