#include<iostream>

using namespace std;
int main(){
    int a,b,c,d,e=1;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    for(int i=2 ;i<=a;i++)
    {
        if((a%i==0)&&(b%i==0)&&(c%i==0)&&(d%i==0))
        {
            e=e*i;
            a=a/i;
            b=b/i;
            c=c/i;
            d=d/i;
            i--;
        }
    }
    cout<<e;
}
