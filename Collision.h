#ifndef COLLISION_H
#define COLLISION_H
#include "Vec3f.h"
#include "Ray.h"
#include "CollisionSphere.h"

class Collision
{
public:
    static bool raysphere(Ray ray, CollisionSphere cSphere);
    static bool raysphere(float xc,
                          float yc,
                          float zc,
                          float xd,
                          float yd,
                          float zd,
                          float xs,
                          float ys,
                          float zs,
                          float r,
                          float* dist = NULL,
                          Vec3f* point = NULL);
    static bool rayplane(float nx,
                         float ny,
                         float nz,
                         float xs,
                         float ys,
                         float zs,
                         float xd,
                         float yd,
                         float zd,
                         Vec3f p1,
                         Vec3f p2,
                         Vec3f p3,
                         Vec3f p4,
                         float* dist = NULL,
                         Vec3f* point = NULL);
    static float trianglearea(Vec3f p1, Vec3f p2, Vec3f p3);
    static bool spheresphere(Vec3f& c1, float r1, Vec3f c2, float r2);
    static float pointdistance(Vec3f c1, Vec3f c2);
    static bool sphereplane(Vec3f& sp, Vec3f vn, Vec3f p1, Vec3f p2, Vec3f p3, Vec3f p4, float r);
};

#endif
