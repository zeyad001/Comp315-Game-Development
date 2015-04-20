
#include "Inventory.h"

Inventory::Inventory(int cargo)
{
    maxSize = cargo;
}

Inventory::~Inventory()
{
}

bool Inventory::addToInventory(Item* i)
{
	
     if(size <= maxSize)
	 {
	items.push_back(i);
	return true;
	 }
	 
	 
	 return false;

}

Item* Inventory::removeFromInventory(int slotid)
{
	     Item* ie = nullptr;
		 int count = 0;
		 for(Item* i : items)
		 {
	   if( count == slotid) {
	    ie = i;

	      break;
	}
	count++;
		 }
		 
	   items.erase(items.begin() + slotid);
	return ie;
}


