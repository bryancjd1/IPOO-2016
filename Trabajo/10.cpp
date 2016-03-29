#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b=0;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        b=b+pow(i,-1);
    }
    cout<<b;
}
