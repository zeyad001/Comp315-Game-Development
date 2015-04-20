#ifndef RAY_H
#define RAY_H

#include "Vec3f.h"

class Ray
{
public:
    Ray(Vec3f rayStart, Vec3f rayDir);
    Vec3f getStart();
    Vec3f getDir();
    void setStart(Vec3f rayStart);
    void setDir(Vec3f rayDir);

private:
    Vec3f start;
    Vec3f dir;
};

#endif // RAY_H
