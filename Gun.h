
#ifndef GUN_H
#define GUN_H
class Gun : public isAWeapon
{
    int ammo = 0;
    virtual void fire() = 0;
    virtual void reload() = 0;
};
#endif