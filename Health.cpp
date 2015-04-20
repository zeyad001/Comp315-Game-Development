
#include "Health.h"
Health::Health(int hp)
{
	this->health = hp;
	this->name = "Health";

}
int Health::getHealth()
{
	
	return this->health;
}
   void Health::setHealth(int hp)
   {
	   this->health = hp;
   }
    void Health::removeHealth(int hp)
	{
		this->health = this->health -hp;
	}
    void Health::kill()
	{

		this->health = 0;
	}
	void Health::input()
	{
		

	}
	void Health::update()
	{
		

	}
	void Health::render()
	{
		

	}