#ifndef GAMELOOP_H
#define GAMELOOP_H
#include "Runnable.h"
#include "Renderable.h"
#include "ReceievesInput.h"
#include "GameWorld.h"
class GameLoop : public Runnable, public Renderable, public ReceievesInput
{
public:
    GameLoop();
    ~GameLoop();
    bool run = true;
    void pause();
    void resume();
    void render();
    void update();
    void input();
    bool isPaused();
    void init(int, char**);
    GameWorld world;
};

#endif // GAMELOOP_H
