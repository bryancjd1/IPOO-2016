#include<iostream>

using namespace std;
int main(){
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b)
    {
        d=a;
        a=b;
        b=d;
    }
    if(a>c)
    {
        d=a;
        a=c;
        c=d;
    }
    if(b>c)
    {
        d=b;
        b=c;
        c=d;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
}
