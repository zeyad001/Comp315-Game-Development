#pragma once
#ifndef GAMEWORLD_H
#define GAMEWORLD_H
#include "Runnable.h"
#include "Renderable.h"
#include "ReceivesInput.h"
#include "EventMessagingSystem.h"
#include "Player.h"
#include "ResourceManager.h"
class GameWorld : public Runnable, public Renderable, public ReceivesInput
{
public:
    GameWorld(EventMessagingSystem* eventMessaging);
    ~GameWorld();
    void init();
    void loadScene();
    void render();
    void update();
    void input();

    // void releaseKey(unsigned char, int , int );
    // void processNormalKeys(unsigned char , int , int) ;
};

#endif // GAMEWORLD_H
