#include "GameWorld.h"
#include <GL/freeglut.h>
#include "Scene.h"
GameWorld::GameWorld()
{
    init();
}

GameWorld::~GameWorld()
{
}

void GameWorld::input()
{
}
void GameWorld::render()
{

    glColor3ub(64, 64, 0);
    glBegin(GL_QUADS);
    glVertex3f(-100.0f, -2.0f, -100.0f);
    glVertex3f(-100.0f, -2.0f, 100.0f);
    glVertex3f(100.0f, -2.0f, 100.0f);
    glVertex3f(100.0f, -2.0f, -100.0f);
    glEnd();
}
void GameWorld::update()
{
}
void GameWorld::init()
{

    Scene scene;
}