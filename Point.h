#ifndef POINT_H
#define POINT_H

class Point
{
public:
    Point(float, float);
    ~Point();
    float x;
    float y;
    float getX();
    void setX(float);
    float getY();
    void setY(float);
    void moveX(float);
    void moveY(float);
};

#endif // POINT_H
