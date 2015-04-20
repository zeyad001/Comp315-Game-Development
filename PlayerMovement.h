#ifndef PLAYERMOVEMENT_H
#define PLAYERMOVEMENT_H
#include "Movement.h"
#include "EventMessagingSystem.h"
#include "Camera.h"

class PlayerMovement : public Movement
{
public:
    PlayerMovement(EventMessagingSystem* listener);
    ~PlayerMovement();
    void input();
    void render();
    void update();
    void mouseMove(int, int);
    void mouseButton(int button, int state, int x, int y);

    void forward();
    void backward();
    void left();
    void right();
    void turn(int);
    void turnLeft();
    void turnRight();
    void notify(int id);
    Camera cam;
    void computePos(float dm, float ds);
};

#endif // PLAYERMOVEMENT_H
