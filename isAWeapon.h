#ifndef WEAPON_H
#define WEAPON_H
#include "Runnable.h"
#include "Renderable.h"
#include "ReceivesInput.h"
#include "string"
class isAWeapon : public Quality
{

public:
    int damage;
    int durability;
};

#endif // WEAPON_H