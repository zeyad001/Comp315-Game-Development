#include "Point.h"

Point::Point(float x1, float y1)
{
    x = x1;
    y = y1;
}

Point::~Point()
{
}

float Point::getX()
{
    return x;
}
void Point::setX(float x1)
{
    x = x1;
}
float Point::getY()
{
    return y;
}

void Point::setY(float y1)
{
    y = y1;
}
void Point::moveX(float x1)
{
    x = x + x1;
}
void Point::moveY(float y1)
{
    y = y + y1;
}
