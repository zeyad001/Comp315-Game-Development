#ifndef NPCMOVEMENT_H
#define NPCMOVEMENT_H
#include "Movement.h"
#include "vec3f.h"
class NpcMovement : public Movement
{
public:
    NpcMovement(Vec3f& loc);
    ~NpcMovement();
	void update();
	void render();
	void input();
	void forward();
     void backward() ;
     void left();
    void right();
	Vec3f* location = nullptr;
	float difference = 0;
	bool sleft = true;
	bool sright = false;
	void notify(int id);
};

#endif // NPCMOVEMENT_H
