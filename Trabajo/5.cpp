#include<iostream>

using namespace std;
int main(){
    int a,b=0,c=0;
    cin>>a;
    for(int i=0;i<=a;i++)
    {
        for(int y=1;y<=i;y++)
        {
            if(i%y==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            b=i+b;
        }
        c=0;

    }
    cout<<b<<endl;
}
