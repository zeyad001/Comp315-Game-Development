#ifndef COLLISIONSPHERE_H
#define COLLISIONSPHERE_H

#include "Vec3f.h"

class CollisionSphere
{
public:
    CollisionSphere();
    CollisionSphere(float radius, const Vec3f& center);
    float getRadius();
    Vec3f getPosition();
    void setRadius(float radius);
    void setPosition(const Vec3f& position);
    void debug();

private:
    float r;
    Vec3f position;
};

#endif // COLLISIONSPHERE_H
