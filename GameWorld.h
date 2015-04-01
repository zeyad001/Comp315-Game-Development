#ifndef GAMEWORLD_H
#define GAMEWORLD_H
#include "Runnable.h"
#include "Renderable.h"
#include "ReceievesInput.h"
class GameWorld : public Runnable, public Renderable, public ReceievesInput
{
public:
    GameWorld();
    ~GameWorld();
    void init();
    void loadScene();
    void render();
    void update();
    void input();
};

#endif // GAMEWORLD_H
