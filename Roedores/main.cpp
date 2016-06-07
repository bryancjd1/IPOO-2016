#include <iostream>
#include "Roedores.h"
#include "raton.h"
#include "hamster.h"
#include "gerbo.h"
#include "Arregloroedor.h"
using namespace std;

int main()
{
    Raton rata;
    Roedores *raton = &rata;
    Hamster Ham;
    Roedores *hamster = &Ham;
    Gerbo gerbo;
    Roedores *gerb = &gerbo;
    Arregloroedor arr;
    arr.llenar(raton);
    arr.llenar(hamster);
    arr.llenar(gerb);
    arr.mostrar();

}
