#ifndef PLAYER_H
#define PLAYER_H

#include "Vec3f.h"
#include "Person.h"
#include <string>
#include "Pistol.h"

class Player : public Person
{
public:
    Player();
    Player(const Vec3f& position, const Vec3f& dir, float ms, float ts);
    void render();
    void update();
    void input();
    void loadModel();
    int getHealth();
    void setHealth(int);
    void setPos(float, float, float);
    Vec3f getPos();
    Vec3f getLook();
    void addBehaviour(Behaviour*);
    bool hasBehaviour(std::string);
    Behaviour* getBehaviour(std::string s);
    Pistol* p;
    void use();
    bool shot;

private:
    Vec3f pos;
    Vec3f lookDir;
    float yaw, pitch;
    float moveSpeed;
    float turnSpeed;
    int health;
    void drawPlayer();
};

#endif // PLAYER_H
