#include<stdio.h>
float Convertir(float x);
int main()
{
    float i;
    printf("Tabla de conversion de Fahrenheit-Celsius\n\n");
    for(i=0;i<=300;i=i+20)
    {
        printf("%3.0f %6.1f\n",i,Convertir(i));
    }
    return 0;
}
float Convertir(float f)
{
    float a;
    a=5*(f-32)/9;
    return a;
}
