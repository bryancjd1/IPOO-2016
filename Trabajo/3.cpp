#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int i,b=0, a[100];
    while(i!=0)
    {
        cin>>i;
        a[b]=i;
        b++;
    }
    for(int y=0;y<b;y++)
    cout<<pow(a[y],2)<<endl;
}
