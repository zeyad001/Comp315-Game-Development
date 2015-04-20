#include "Ray.h"

Ray::Ray(Vec3f rayStart, Vec3f rayDir)
{
    start = { rayStart.getX(), rayStart.getY(), rayStart.getZ() };
    dir = { rayDir.getX(), rayDir.getY(), rayDir.getZ() };
}

Vec3f Ray::getStart()
{
    return start;
}

Vec3f Ray::getDir()
{
    return dir;
}

void Ray::setStart(Vec3f rayStart)
{
    start = { rayStart.getX(), rayStart.getY(), rayStart.getZ() };
}
void Ray::setDir(Vec3f rayDir)
{
    dir = { rayDir.getX(), rayDir.getY(), rayDir.getZ() };
}
