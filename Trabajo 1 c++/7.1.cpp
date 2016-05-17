#include<iostream>
using namespace std;

int length(char *a);

int main()
{
    int longitud;
    char a[]="abcde";
    longitud=length(a);
    cout<<longitud;
}
int length(char *a)
{
    int longitud;
    for(longitud=0; *a!='\0';a++)
        longitud++;
    return longitud -1;
}
