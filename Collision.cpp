#include "Collision.h"
#include "Ray.h"
#include "CollisionSphere.h"

bool Collision::raysphere(Ray ray, CollisionSphere cSphere)
{

    return raysphere(cSphere.getPosition().getX(),
                     cSphere.getPosition().getY(),
                     cSphere.getPosition().getZ(),
                     ray.getDir().getX(),
                     ray.getDir().getY(),
                     ray.getDir().getZ(),
                     ray.getStart().getX(),
                     ray.getStart().getY(),
                     ray.getStart().getZ(),
                     cSphere.getRadius());
}

bool Collision::raysphere(float xc,
                          float yc,
                          float zc,
                          float xd,
                          float yd,
                          float zd,
                          float xs,
                          float ys,
                          float zs,
                          float r,
                          float* dist,
                          Vec3f* point)
{
    float b = 2 * (xd * (xs - xc) + yd * (ys - yc) + zd * (zs - zc));
    float c =
        xs * xs - 2 * xs * xc + xc * xc + ys * ys - 2 * ys * yc + yc * yc + zs * zs - 2 * zs * zc + zc * zc - r * r;
    float disc = (b * b - 4 * c);
    if(disc < 0)
	return false;
    /*	if(dist!=NULL)
            {
                    //-b+disc/2
                    (*dist)=(-b+disc)/2;
                    if(point!=NULL)
                    {
                            //xs+t*xd
                            point->x=xs+(*dist)*xd;
                            point->y=ys+(*dist)*yd;
                            point->z=zs+(*dist)*zd;
                    }
            } */
    return true;
    //(x+y)^2=x^2+2xy+y^2
}

/*
bool Collision::rayplane(float nx,float ny,float nz,float xs,float ys,float zs,float xd,float yd,float zd,Vec3f p1,Vec3f
p2,Vec3f p3,Vec3f p4,float* dist,Vec3f* point)
{
        float a=xd*nx+yd*ny+zd*nz;
        if(a==0)
                return false;
        float t=((p1.getX()*nx+p1.getY()*ny+p1.getZ()*nz-nx*xs-ny*ys-nz*zs)/a);
        if(t<0)
                return false;
        float x=xs+t*xd;
        float y=ys+t*yd;
        float z=zs+t*zd;
        Vec3f cp(x,y,z);
        if(abs(trianglearea(p1,p3,p4)-trianglearea(p1,p4,cp)-trianglearea(p1,p3,cp)-trianglearea(p3,p4,cp))<0.000001 ||
abs(trianglearea(p1,p2,p3)-trianglearea(p1,p2,cp)-trianglearea(p2,p3,cp)-trianglearea(p1,p3,cp))<0.000001)
        {
                if(dist!=NULL)
                {
                        (*dist)=t;
                        if(point!=NULL)
                        {
                                point->x=x;
                                point->y=y;
                                point->z=z;
                        }
                }
                return true;
        }
        return false;
}


float Collision::trianglearea(Vec3f p1,Vec3f p2,Vec3f p3)
{
        //area of the triangle with the heron fomula
        float
a=sqrt((p2.getX()-p1.getX())*(p2.getX()-p1.getX())+(p2.getY()-p1.getY())*(p2.getY()-p1.getY())+(p2.getZ()-p1.getZ())*(p2.getZ()-p1.getZ()));
        float
b=sqrt((p3.getX()-p2.getX())*(p3.getX()-p2.getX())+(p3.getY()-p2.getY())*(p3.getY()-p2.getY())+(p3.getZ()-p2.getZ())*(p3.getZ()-p2.getZ()));
        float
c=sqrt((p1.getX()-p3.getX())*(p1.getX()-p3.getX())+(p1.getY()-p3.getY())*(p1.getY()-p3.getY())+(p1.getZ()-p3.getZ())*(p1.getZ()-p3.getZ()));
        float s=(a+b+c)/2.;
        return (sqrt(s*((s-a)*(s-b)*(s-c))));

}

bool Collision::spheresphere(Vec3f& c1,float r1,Vec3f c2,float r2)
{
        float dist=pointdistance(c1,c2);
        if(dist<=(r1+r2)*(r1+r2))
        {
                float a=sqrt(dist)-(r1+r2);
                Vec3f vec(c2.getX()-c1.getX(),c2.getY()-c1.getY(),c2.getZ()-c1.getZ());	//c2-c1
                float len=sqrt((vec.getX()*vec.getX()+vec.getY()*vec.getY()+vec.getZ()*vec.getZ()));
                vec.getX()/=len;
                vec.getY()/=len;
                vec.getZ()/=len;
                c1.getX()=c1.getX()+vec.getX()*a;
                c1.getY()=c1.getY()+vec.getY()*a;
                c1.getZ()=c1.getZ()+vec.getZ()*a;
                return 1;
        }
        return 0;
}

float Collision::pointdistance(Vec3f c1,Vec3f c2)
{
        Vec3f vec(c2.getX()-c1.getX(),c2.getY()-c1.getY(),c2.getZ()-c1.getZ());
        return (vec.getX()*vec.getX()+vec.getY()*vec.getY()+vec.getZ()*vec.getZ());
}


bool Collision::sphereplane(Vec3f& sp, Vec3f vn,Vec3f p1,Vec3f p2,Vec3f p3, Vec3f p4,float r)
{
        //float nx,float ny,float nz,float xs,float ys,float zs,float xd,float yd,float zd,Vec3f p1,Vec3f p2,Vec3f
p3,Vec3f p4,float* dist,Vec3f* point)
        float dist1=0,dist2=0;
        if(rayplane(-vn.getX(),-vn.getY(),-vn.getZ(),sp.getX(),sp.getY(),sp.getZ(),vn.getX(),vn.getY(),vn.getZ(),p1,p2,p3,p4,&dist1)
||
rayplane(vn.getX(),vn.getY(),vn.getZ(),sp.getX(),sp.getY(),sp.getZ(),-vn.getX(),-vn.getY(),-vn.getZ(),p1,p2,p3,p4,&dist2))
        {
                if(dist1>r || dist2>r)
                        return false;
                if(dist1>0)
                {
                        sp.getX()=sp.getX()-vn.getX()*(r-dist1);
                        sp.getY()=sp.getY()-vn.getY()*(r-dist1);
                        sp.getZ()=sp.getZ()-vn.getZ()*(r-dist1);
                }else{
                        sp.getX()=sp.getX()+vn.getX()*(r-dist2);
                        sp.getY()=sp.getY()+vn.getY()*(r-dist2);
                        sp.getZ()=sp.getZ()+vn.getZ()*(r-dist2);
                }
                return 1;
        }
        return 0;
}
*/
