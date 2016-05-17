#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
double calcular(const int disparos);
int main ()
{
     double valor=calcular(5000000);
     cout<<valor;
     return 0;
}

double calcular(const int disparos)
{
    int contador=0;
    srand((int) time(NULL));
    double x, y;
    for(int i=0;i<disparos;i++)
    {
         x = rand() / (double)RAND_MAX;
         y = rand() / (double)RAND_MAX;

         double distancia= (x*x)+(y*y);
         if (distancia<1)
            contador++;
    }
    return (double)contador*4/disparos;
}
