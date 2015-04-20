#ifndef INVENTORY_H
#define INVENTORY_H
#include <vector>
#include "Item.h"
#include "Behaviour.h"
class Inventory : public Behaviour
{
public:
    Inventory(int);
    ~Inventory();
    int size = 0;
    int maxSize = 0;
    std::vector<Item*> items;
    virtual bool addToInventory(Item*) = 0;
    virtual Item* removeFromInventory(int slotId) = 0;
};

#endif // INVENTORY_H
