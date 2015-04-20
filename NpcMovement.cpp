#include "NpcMovement.h"
#include <iostream>
NpcMovement::NpcMovement(Vec3f& loc)
{
	this->location = &loc;
}

NpcMovement::~NpcMovement()
{
}


void NpcMovement::update()
{
	
	
	if(difference > 10 || difference < 0)
	{
		if(difference > 10)
		{
			sright = false;
			sleft = true;
		}
		if(difference < 0)
		{
			sright = true;
			sleft = false;
		}
		
	}
	
	if(sright)
	{
		this->location->setVec(location->getX() +1,location->getY(),location->getZ());
		difference ++ ;
		
	}
	if(sleft)
	{
			this->location->setVec(location->getX() -1,location->getY(),location->getZ());
		difference -- ;
		
	}
	std::cout << location->getX() << "NPC \n";
}
	void NpcMovement::forward()
	{
		
	}
     void NpcMovement::backward() 
	 {
		 
	 }
     void NpcMovement::left()
	 {
		 
	 }
    void NpcMovement::right()
	{
		

	}
	void NpcMovement::notify(int id)
	{
		

	}
	void NpcMovement::render()
	{
		

	}
	
	void NpcMovement::input()
	{
		

	}