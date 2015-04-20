
#include "GameWorld.h"
#include "Collision.h"
#include "Ray.h"
#include <GL/freeglut.h>
#include <vector>
#include <math.h>
#include "Scene.h"
#include "Zombie.h"
#include "Player.h"
#include "Vec3f.h"
#include "PlayerMovement.h"
#include "EventMessagingSystem.h"
#define M_PI 3.1415926535897932384

std::vector<Zombie> zombies;

float lx = 0.0f, ly = 0.0f, lz = -1.0f;

float x = 0.0f, y = 1.0f, z = 5.0f;
void init();
Vec3f pos(x, y, z);
Vec3f look(lx, ly, lz);
float moveSpeed = 0.05f;
float turnSpeed = M_PI / 180 * 0.5;
// Player player(pos, look, moveSpeed, turnSpeed);
Player* player = nullptr;
EventMessagingSystem* EventMessage = nullptr;
ResourceManager* manager = nullptr;

GameWorld::GameWorld(EventMessagingSystem* EventMessager)
{
    EventMessage = EventMessager;
    init();
    player = new Player(pos, look, moveSpeed, turnSpeed);
    PlayerMovement* movement = new PlayerMovement(EventMessage);
    player->addBehaviour(movement);
    manager = new ResourceManager();
}

GameWorld::~GameWorld()
{
}

/*

*/
/*
void mouseButton(int button, int state, int x, int y)
{

    EventMessage->createEvent(4,button, state, x, y);
}
*/

void mouseButton(int button, int state, int x, int y)
{

    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {

	player->use();

    } else if(button == GLUT_LEFT_BUTTON && state == GLUT_UP) {
	player->shot = false;
    }
}

void releaseKey(unsigned char key, int x, int y)
{
    /*
            switch (key) {
                 case 'w' :
                 case 's' : deltaMove = 0.0f; break;
                 case 'd' :
                 case 'a' : deltaShift = 0.0f; break;
            }
                      */
    EventMessage->createEvent(2, key);
}

void processNormalKeys(unsigned char key, int xx, int yy)
{

    switch(key) {
    case 27: {
	glutDestroyWindow(0);
	exit(0);
	break;
    }
	//  case 'w' : deltaMove = 1.0f; break;
	// case 's' : deltaMove = -1.0f; break;
	// case 'd' : deltaShift = -1.0f; break;
	// case 'a' : deltaShift = 1.0f; break;
    }

    EventMessage->createEvent(1, key);
    // EventMessage->createEvent(1,key);
}

void mouseMove(int x, int y)
{
    std::cout << x << " " << y << "\n";
    EventMessage->createEvent(3, x, y);
}

void GameWorld::input()
{

    player->input();

    // glutPassiveMotionFunc(mouseMove);
}
void GameWorld::render()
{
    /*
if(deltaMove || deltaShift)
    computePos(deltaMove, deltaShift);

player.update();
*/
    player->update();
    player->render();
    glColor3ub(64, 64, 0);
    glBegin(GL_QUADS);
    glVertex3f(-100.0f, -2.0f, -100.0f);
    glVertex3f(-100.0f, -2.0f, 100.0f);
    glVertex3f(100.0f, -2.0f, 100.0f);
    glVertex3f(100.0f, -2.0f, -100.0f);
    glEnd();

    for(unsigned int i = 0; i < zombies.size(); i++) {
	zombies[i].render();
    }
    player->update();
}

bool hit = false;
void GameWorld::update()
{

    player->update();
    if(player->shot == true) {
	// std::cout << "HIT" << std::endl;
	for(unsigned int i = 0; i < zombies.size(); i++) {
	    if(Collision::raysphere(Ray(player->getPos(), player->getLook()), zombies[i].cs)) {
		if(!hit) {
		    hit = true;
		    zombies[i].damage(35);
		    std::cout << "HIT " << i << std::endl;
		}
	    }
	}
    } else {
	hit = false;
    }
    if(zombies.size() > 0)
	for(unsigned int i = 0; i < zombies.size(); i++) {
	    if(zombies[i].getHealth() <= 0) {
		zombies.erase(zombies.begin() + i);
	    }
	    zombies[i].update();
	}
}
void GameWorld::init()
{

    Scene scene;

    for(int i = -2; i < 2; i++) {
	for(int j = -2; j < 2; j++) {
	    Zombie zombie(i, 0, j, 1);
		zombie.addBehaviour(new Health(100));
	    zombies.push_back(zombie);
	}
    }

    glutIgnoreKeyRepeat(1);
    glutKeyboardFunc(processNormalKeys);
    glutPassiveMotionFunc(mouseMove);
    glutKeyboardUpFunc(releaseKey);
    glutMouseFunc(mouseButton);
}
