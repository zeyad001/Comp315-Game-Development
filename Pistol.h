#ifndef PISTOL_H
#define PISTOL_H
#include <GL/freeglut.h>
#include "Vec3f.h"
#include <vector>
//#include "Projectile.h"
class Pistol
{
public:
    Pistol(const Vec3f& pos);
    ~Pistol();
    void render();
    void fire(const Vec3f& pos);
    void fire();
    void reload();
    int ammo = 10;
    void setDir(const Vec3f& dir);
    Vec3f pos;
    Vec3f dir;
    void loadModel();
    // std::vector<Projectile*> proj;

private:
    void drawGun();
};

#endif // PISTOL_H
