
#include <GL/glut.h>

#include "Zombie.h"
#include "Vec3f.h"
#include "CollisionSphere.h"
#include "objloader.h"
#include "NpcMovement.h"
#include <iostream>



Zombie::Zombie(float x, float y, float z, float r) 
{
   // this->x = x;
  //  this->y = y;
  //  this->z = z;
   // this->r = r;
   this->location.setVec(x,y,z);
	NpcMovement* move = new NpcMovement(location);
	//behaviours.push_back(move);
	this->addBehaviour(move);
    cs.setRadius(r);
    cs.setPosition(location);
    health = 100;
}
void Zombie::damage(int damage)
{
	
	  
   if(this->hasBehaviour("Health")) // this->hasBehaviour("Movement"))
    {
	Behaviour* b = (this->getBehaviour("Health"));
	Health* hp = (Health*)(b);
	hp->removeHealth(damage);
	
    }
    
}


void Zombie::addBehaviour(Behaviour* b)
{
    behaviours.push_back(b);
}

bool Zombie::hasBehaviour(std::string s)
{

    for(Behaviour* b : behaviours) {

	// if(strcmp(b->getBehaviourName(),s))
	if(s == b->getBehaviourName()) {
	    return true;
	}
    }

    return false;
}

Behaviour* Zombie::getBehaviour(std::string s)
{
    for(Behaviour* b : behaviours) {
	if(s == b->getBehaviourName()) {
	    return b;
	}
    }
    return nullptr;
}
int Zombie::getHealth()
{
    
   
   if(this->hasBehaviour("Health")) // this->hasBehaviour("Movement"))
    {
	Behaviour* b = (this->getBehaviour("Health"));
	Health* hp = (Health*)(b);
	return hp->getHealth();
	
    }
	
	return health;
}

void Zombie::render()
{
    glPushMatrix();


    glTranslated(location.getX() * 10.0, location.getY() * 10.0,location.getZ() * 10.0);
    cs.setPosition(Vec3f(location.getX() * 10.0, location.getY() * 10.0,location.getZ() * 10.0));
   // cs.debug(); // to  view the collision shape for debugging
    // drawZombie();
    loadModel();

    glPopMatrix();
}

void Zombie::update()
{
	 for(Behaviour* b : behaviours) {
	b->update();
		std::cout << location.getX() << "zombies\n";
    }
}

void Zombie::loadModel()
{

    glCallList(1);
}




void Zombie::input()
{
	
}



void Zombie::drawZombie()
{

    glPushMatrix();
    glColor3f(1.0f, 1.0f, 1.0f);

    // Draw Body
    glTranslatef(0.0, -0.25, 0.0);
    glutSolidSphere(0.75, 20, 20);

    // Draw Head
    glTranslatef(0.0, 0.95, 0.0);
    glutSolidSphere(0.25, 20, 20);

    // Draw Eyes
    glPushMatrix();
    glColor3f(0.0, 0.0, 1.0);
    glTranslatef(0.1, 0.1, -0.2);
    glutSolidSphere(0.05, 10, 10);
    glTranslatef(-0.2, 0.0, 0.0);
    glutSolidSphere(0.05, 10, 10);
    glPopMatrix();

    // Draw Nose
    glPushMatrix();
    glTranslatef(0.0, -0.04, -0.25);
    glRotatef(180, 0.0, 1.0, 0.0);
    glColor3ub(255, 182, 108);
    glutSolidCone(0.06, 0.3, 10, 2);
    glPopMatrix();

    glPopMatrix();
}
