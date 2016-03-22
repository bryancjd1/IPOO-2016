#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    float a,b;
    cout<<"Tabla de conversion de Fahrenheit-Celsius\n\n";
    for(float i=0;i<=300;i=i+20)
    {
        b=5*(i-32)/9;
        printf("%3.0f %6.1f\n",i, b);
    }
    return 0;
}
