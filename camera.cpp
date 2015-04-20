#include <stdio.h>
#include <math.h>
#include <GL/freeglut.h>
#include "Camera.h"
#include "Vec3f.h"
#define M_PI 3.1415926535897932384
void Camera::setSpeed(float ms, float ts)
{
    moveSpeed = ms;
    turnSpeed = ts;
}

GLfloat light_position[4];
GLfloat light_direction[3];
GLfloat light_angle[] ={20};

//GLfloat light_position[] = { m_x+1, m_y, m_z+1, 1.0f };
//GLfloat light_direction[] = { m_x+m_lx,m_y+m_ly,m_z+m_lz};
//GLfloat light_angle[] ={20};
	

void Camera::init()
{
    m_yaw = 0.0;
    m_pitch = 0.0;
	
    setPos(-1, 1, -1);
	
	//light_position = { m_x+1, m_y, m_z+1, 0.0f };
	
	light_position[0] = m_x + 1;
	light_position[1] = m_y;
	light_position[2] = m_z +1;
	
	light_direction[0] = m_x + m_lx;
	light_direction[1] = m_y + m_ly;
	light_direction[2] = m_z + m_lz;
	
	

	//glLightfv(GL_LIGHT0, GL_POSITION, light_position);
//glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION,light_direction);
//glLightfv(GL_LIGHT0,GL_SPOT_CUTOFF,light_angle);
	
//glEnable(GL_LIGHT1);

}

void Camera::refresh()
{
    // Camera parameter according to Riegl's co-ordinate system
    // x/y for flat, z for height
    m_lx = cos(m_yaw) * cos(m_pitch);
    m_ly = sin(m_pitch);
    m_lz = sin(m_yaw) * cos(m_pitch);
    m_strafe_lx = cos(m_yaw - M_PI / 2);
    m_strafe_lz = sin(m_yaw - M_PI / 2);
	
	
	

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(m_x, m_y, m_z, m_x + m_lx, m_y + m_ly, m_z + m_lz, 0.0, 1.0, 0.0);

    // printf("Camera: %f %f %f Direction vector: %f %f %f\n", m_x, m_y, m_z, m_lx, m_ly, m_lz);
}

void Camera::setPos(float x, float y, float z)
{
    m_x = x;
    m_y = y;
    m_z = z;

    refresh();
}

Vec3f Camera::getPos()
{
    return Vec3f(m_x, m_y, m_z);
}

void Camera::setLookDir(float x, float y, float z)
{
    m_lx = x;
    m_ly = y;
    m_lz = z;
}

Vec3f Camera::getLookDir()
{
    return Vec3f(m_lx, m_ly, m_lz);
}

void Camera::move(float deltaMove)
{
    float lx = cos(m_yaw) * cos(m_pitch);
    // float ly = sin(m_pitch);
    float lz = sin(m_yaw) * cos(m_pitch);

    m_x = m_x + moveSpeed * lx * deltaMove;
    // m_y = m_y + incr*ly;
    m_z = m_z + moveSpeed * lz * deltaMove;

    refresh();
}

void Camera::strafe(float deltaMove)
{
    refresh();
    m_x = m_x + moveSpeed * m_strafe_lx * deltaMove;
    m_z = m_z + moveSpeed * m_strafe_lz * deltaMove;

    refresh();
}

void Camera::rotateYaw(float angle)
{
    m_yaw += turnSpeed * angle;

    refresh();
}

void Camera::rotatePitch(float angle)
{
    const float limit = 89.0 * M_PI / 180.0;

    m_pitch -= turnSpeed * angle;

    if(m_pitch < -limit)
	m_pitch = -limit;

    if(m_pitch > limit)
	m_pitch = limit;

    refresh();
}

void Camera::setYaw(float angle)
{
    m_yaw = angle;

    refresh();
}

float Camera::getYaw()
{
    return m_yaw;
}

void Camera::setPitch(float angle)
{
    m_pitch = angle;

    refresh();
}

float Camera::getPitch()
{
    return m_pitch;
}
