#ifndef INVENTORY_H
#define INVENTORY_H
#include <vector>
#include "Item.h"
class Inventory
{
public:
     Inventory(int);
     ~Inventory();
    int size = 0;
    std::vector<Item*> list;
    virtual void addToInventory(Item*) = 0;
    virtual void removeFromInventory(int slotId) = 0;
};

#endif // INVENTORY_H
