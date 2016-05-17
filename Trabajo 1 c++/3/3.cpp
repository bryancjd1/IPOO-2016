#include <iostream>
#include "point.h"
using namespace std;

int main()
{
    Point vec(5,4);
    cout<<vec.getX()<<endl;
    cout<<vec.getY()<<endl;
    vec.setX(8);
    vec.setY(9);
    cout<<vec.getX()<<endl;
    cout<<vec.getY()<<endl;
}
