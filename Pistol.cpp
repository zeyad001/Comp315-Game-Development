#include "Pistol.h"
#include "GL/glut.h"
//#include "Projectile.h"
#include "Vec3f.h"

Pistol::Pistol(const Vec3f& position)
{
    this->pos.setVec(position);
    this->dir.setVec(1, 0, 0);
}

Pistol::~Pistol()
{
}

void Pistol::render()
{
    // drawGun();
    loadModel();
    int count = 0;

    /*	for(Projectile *p : proj)
            {
                    if(p->distanceFlew() > 20)
                    {
                             proj.erase(proj.begin() + count);
                    }
                    count++;
            }

            for(Projectile *p : proj)
            {
                    p->update();
            }
            */
}

void Pistol::fire(const Vec3f& direction)
{

    if(ammo <= 0) {
	reload();
    } else {
	ammo--;
	//	Projectile *p = new Projectile(pos, dir);
	//	proj.push_back(p);
    }
}
void Pistol::fire()
{
    if(ammo <= 0) {
	reload();
    } else {
	ammo--;
	//	Projectile *p = new Projectile(pos, dir);
	//	proj.push_back(p);
    }
}

void Pistol::reload()
{
    if(ammo == 0) {
	ammo = 10;
    }
}

void Pistol::setDir(const Vec3f& dir)
{
    this->dir.setVec(dir);
}

void Pistol::loadModel()
{

    glPushMatrix();
    glTranslatef(1, -0.2, 0);
    glRotatef(90, 0, -1.0f, 0);
    glScaled(0.3, 0.3, 0.3);
    glCallList(2);
    glPopMatrix();
}

void Pistol::drawGun()
{

    glPushMatrix();
    glColor3f(0.25, 0.25, 0.25);
    // glRotatef(-30,0,0,0.5);
    glTranslatef(1, -0.2, 0);

    glPushMatrix();
    glTranslatef(0, -0.2, 0);
    glutSolidCylinder(0.2, 0.1, 16, 16);
    glPopMatrix();

    glTranslatef(0, 0, 0.05);
    glRotatef(90, 0, 1.0f, 0);
    glutSolidCylinder(0.1, 0.1, 16, 16);
    // glutSolidCone(0.1,0.1,16,16);
    glPopMatrix();
}
