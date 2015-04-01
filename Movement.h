#ifndef MOVEMENT_H
#define MOVEMENT_H
#include "Behaviour.h"
class Movement : public Behaviour
{
public:
    virtual void forward() = 0;
    virtual void backward() = 0;
    virtual void left() = 0;
    virtual void right() = 0;
    virtual void turn(int) = 0;
    virtual void turnLeft() = 0;
    virtual void turnRight() = 0;
};

#endif // MOVEMENT_H
