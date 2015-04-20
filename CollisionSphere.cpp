#include "CollisionSphere.h"
#include <GL/glut.h>

CollisionSphere::CollisionSphere()
{
    position.setVec(0, 0, 0);
    this->r = 0;
}

CollisionSphere::CollisionSphere(float radius, const Vec3f& center)
{
    position.setVec(center);
    this->r = radius;
}

void CollisionSphere::debug()
{
    glutWireSphere(r, 10, 10);
}

float CollisionSphere::getRadius()
{
    return this->r;
}

Vec3f CollisionSphere::getPosition()
{
    return this->position;
}

void CollisionSphere::setRadius(float radius)
{
    this->r = radius;
}

void CollisionSphere::setPosition(const Vec3f& position)
{
    this->position.setVec(position);
}
