#include "point.h"
Point::Point(int newx, int newy)
{
    x=newx;
    y=newy;
}

int Point::getX()
{
    return x;
}
int Point::getY()
{
    return y;
}
void Point::setX(int newx)
{
    x=newx;
}
void Point::setY(int newy)
{
    y=newy;
}
