#ifndef __CAMERA_H__
#define __CAMERA_H__

#include "Vec3f.h"

class Camera
{
public:
    Camera()
    {
	init();
    }
    ~Camera()
    {
    }

    void init();
    void refresh();
    void setPos(float x, float y, float z);
    Vec3f getPos();
    void setLookDir(float x, float y, float z);
    Vec3f getLookDir();
    void setYaw(float angle);
    float getYaw();
    void setPitch(float angle);
    float getPitch();
    void setSpeed(float ms, float ts);
    // Navigation
    void move(float deltaMove);
    void strafe(float deltaMove);
    void rotateYaw(float angle);
    void rotatePitch(float angle);

private:
    float m_x, m_y, m_z;            // Position
    float m_lx, m_ly, m_lz;         // Direction vector of where we are looking at
    float m_yaw, m_pitch;           // Various rotation angles
    float m_strafe_lx, m_strafe_lz; // Always 90 degree to direction vector
    float moveSpeed, turnSpeed;
};

#endif
