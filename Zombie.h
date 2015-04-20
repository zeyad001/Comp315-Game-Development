
#include "CollisionSphere.h"
#include "Person.h"
#include "Health.h"
#include "Behaviour.h"
class Zombie : public Person
{

public:
    Zombie(float x, float y, float z, float r);
    void render();
    void update();
	void input();
    CollisionSphere cs;
    void damage(int damage);
    int getHealth();
    void loadModel();
	void addBehaviour(Behaviour*);
   bool hasBehaviour(std::string);
    Behaviour* getBehaviour(std::string s);

private:
    void drawZombie();
    float x, y, z, r;
   Vec3f location;
    int health;
};
