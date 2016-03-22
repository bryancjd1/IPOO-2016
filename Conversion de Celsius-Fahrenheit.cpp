#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    float a,b;
    cout<<"Tabla de conversion de Celsius-Fahrenheit\n\n";
    for(float i=0;i<=300;i=i+20)
    {
        b=i*9/5+32;
        printf("%3.0f %6.1f\n",i, b);
    }
    return 0;
}
