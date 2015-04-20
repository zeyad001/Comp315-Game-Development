#ifndef HEALTH_H
#define HEALTH_H
#include "Behaviour.h"
class Health : public Behaviour
{
public:
    int health;
	Health(int);
    
    int getHealth();
    void setHealth(int);
    void removeHealth(int);
    void kill();
	void input();
	void update();
	void render();
};

#endif // HEALTH_H
