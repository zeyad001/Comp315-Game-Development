#ifndef ITEM_H
#define ITEM_H
#include "Runnable.h"
#include "Renderable.h"
#include "ReceievesInput.h"
#include "string"
#include "Quality.h"
class Item : public Runnable, public Renderable, public ReceievesInput
{
public:
    std::vector<Quality> qualities;
    std::string name;
    virtual void pickup() = 0;
    virtual void drop() = 0;
    virtual void use() = 0;
    virtual void addAQuality(Quality*) = 0;
    virtual void removeAQuality(int slotid) = 0;
};

#endif // ITEM_H
