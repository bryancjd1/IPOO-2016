#include<iostream>
#include <cmath>
using namespace std;

class Point
{
    private:
        int x,y;
    public:
        Point(int newx=0, int newy=0):x(newx), y(newy){}

        const int getX() const {return x;}
        const int getY() const {return y;}
        void setX(const int newx){x=newx;}
        void setY(const int newy){y=newy;}

};
class PointArray
{
    private:
        int size;
        Point *point;
        void resize(int n);
    public:
        PointArray();
        PointArray(const Point pointcopy[], const int copysize);
        PointArray(const PointArray& pv);
        ~PointArray();
        const int getSize() const {return size;}
        Point * getPoints() const { return point; }
        void push_back(const Point &p);
        void insert(const int position, const Point &p);
        void remove(const int pos);
        Point *get(const int position);
        const Point *get(const int position) const;
};

class Polygon {

protected:
    PointArray point;
    static int poligonos;

public:
    Polygon(const PointArray &point);
    Polygon(const Point point[], const int length);

    const PointArray *getPoints() const { return &point; }
    static int getNumPolygons() { return poligonos; }
    virtual double area() = 0;
    int getNumSides();
};

class Rectangle : public Polygon {
public:
    Rectangle(const Point &lowerLeft, const Point &upperRight);
    Rectangle(const int a, const int b, const int c, const int d);
    virtual double area() override;
};

class Triangle : public Polygon {
public:
    Triangle(const Point &a, const Point &b, const Point &c);
    virtual double area() override;
};
