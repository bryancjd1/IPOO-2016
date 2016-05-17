#include<iostream>
using namespace std;

void print_array(int a[], int b);

int main()
{
    int a[5]={1,2,3,4,5};
    print_array(a,5);
}
void print_array(int a[], int b)
{
    for(int i=0;i<b;i++)
    {
        cout<<a[i];
        if(i!=b-1)
        {
            cout<<", ";
        }
    }
}
