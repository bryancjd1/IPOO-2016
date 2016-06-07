#include "Arregloroedor.h"

void Arregloroedor::llenar(Roedores *x)
{
    //arreglo[cantidad]=x;
    arreglo.push_back(x);
    cantidad++;
}
void Arregloroedor::mostrar()
{
    for(int i=0;i<3;i++)
    {
        arreglo[i]->caminar();
        arreglo[i]->comunicarse();
        arreglo[i]->comer();
    }
}
