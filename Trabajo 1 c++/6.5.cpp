#include<iostream>
using namespace std;

void reverse(int a[], int b);

int main()
{
    int a[5]={1,2,3,4,5};
    reverse(a,5);
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
        if(i!=4)
        {
            cout<<", ";
        }
    }
}
void reverse(int *a, int b)
{
    int temp;
    for(int i=0;i<b/2;i++)
    {
        temp=*(a+i);
        *(a+i)=*(a+b-1);
        *(a+b-1)=temp;
        b--;
    }
}

