#include<iostream>
#include <cmath>
#include "geometry.h"
using namespace std;



PointArray::PointArray()
{
    size=0;
    point=new Point[size];
}
PointArray::PointArray(const Point pointcopy[], const int copysize)
{
    size=copysize;
    point = new Point[size];
    for(int i=0; i<size; i++)
    {
        point[i]=pointcopy[i];
    }
}
PointArray::PointArray(const PointArray &pv)
{
    size = pv.size;
    point = new Point[size];
    for(int i=0; i<size;i++)
    {
        point[i]=pv.point[i];
    }
}
void PointArray::resize(int newsize){
    Point *pts=new Point[newsize];
    size=(newsize>size)?size:newsize;
    for(int i=0;i<size;i++)
        pts[i]=point[i];
    delete[] point;
    size=newsize;
    point=pts;
};
PointArray::~PointArray()
{
    delete[] point;
}
void PointArray::push_back(const Point &p)
{
    resize(size+1);
    point[size-1] = p;
}
void PointArray::insert(const int position, const Point &p)
{
    resize(size+1);
    for(int i=size-1;i>position; i--)
    {
        point[i]=point[i-1];
    }
    point[position]=p;
}
void PointArray::remove(const int pos)
{
    if(pos>0 && pos<size)
    {
        for(int i=pos;i<size-2;i++)
            point[i]=point[i+1];
    }
    resize(size-1);
}

Point * PointArray::get(const int position)
{
    return position>=0 && position<size ? point + position : NULL;
}
const Point *PointArray::get(const int position) const
{
    return position>=0 && position<size ? point + position : NULL;
}


int Polygon::poligonos = 0;
Polygon::Polygon(const Point point[], const int length) : point (point, length)
{
    ++poligonos;
}

Polygon::Polygon(const PointArray &point) : point(point)
{
    ++poligonos;
}
int Polygon::getNumSides()
{
    return point.getSize();
}

Point constructorPoints[4];
Point *updateConstructorPoints(const Point &p1, const Point &p2, const Point &p3, const Point &p4 = Point(0,0))
{
    constructorPoints[0] = p1;
    constructorPoints[1] = p2;
    constructorPoints[2] = p3;
    constructorPoints[3] = p4;
    return constructorPoints;
}
Rectangle::Rectangle(const Point &a, const Point &b) : Polygon{updateConstructorPoints(a, Point(a.getX(), b.getY()), Point(b.getX(),a.getY()),b),4}{}
Rectangle::Rectangle(const int a, const int b, const int c, const int d) : Polygon{updateConstructorPoints(Point(a,b), Point(a,d), Point(c,b), Point(c,d)), 4} {}

double Rectangle::area()
{
    int largo = point.get(1)->getY() - point.get(0)->getY();
    int ancho = point.get(2)->getX() - point.get(1)->getX();
    return ((double)largo*ancho);
}

Triangle::Triangle(const Point &a, const Point &b, const Point &c) : Polygon(updateConstructorPoints(a, b, c), 3) {}

double Triangle::area()
{
    int abx = point.get(0)->getX() - point.get(1)->getX();
    int bcx = point.get(1)->getX() - point.get(2)->getX();
    int cax = point.get(2)->getX() - point.get(0)->getX();
    int aby = point.get(0)->getY() - point.get(1)->getY();
    int bcy = point.get(1)->getY() - point.get(2)->getY();
    int cay = point.get(2)->getY() - point.get(0)->getY();

    double a = sqrt(abx*abx + aby*aby);
    double b = sqrt(bcx*bcx + bcy*bcy);
    double c = sqrt(cax*cax + cay*cay);

    double s = (a+b+c)/ 2;

    return sqrt(s*(s-a)*(s-b)*(s-c));
}
void printAttributes(Polygon *poly)
{
    const PointArray *pa = poly-> getPoints ();
    for(int i = 0; i < pa -> getSize (); ++i)
    {
        cout << "(" << pa ->get (i) ->getX () << ", " << pa ->get(i) ->getY () << ")\n";
    }
    cout<< poly-> area () << ".\n";
}

void lab3_sec5() {
    Rectangle r = Rectangle(0, 1, 3, 5);
    printAttributes(&r);

    Triangle t = Triangle(Point(0,0), Point(0,2), Point(2,0));
    printAttributes(&t);
}

int main(const int argc, const char *argv[])
{
    lab3_sec5();
    return 0;
}
