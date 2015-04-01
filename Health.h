#ifndef HEALTH_H
#define HEALTH_H
#include "Behaviour.h"
class Health : public Behaviour
{
public:
    int health;

    int getHealth();
    void setHealth(int);
    void removeHealth(int);
    void kill();
};

#endif // HEALTH_H
