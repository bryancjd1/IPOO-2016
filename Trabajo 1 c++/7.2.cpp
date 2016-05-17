#include<iostream>
using namespace std;

void swap(int &a, int &b);

int main()
{
    int x=2, y=3;
    swap(x,y);
    cout<<x<<", "<<y<<endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

}
