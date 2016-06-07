#include"Roedores.h"
#include<vector>
class Arregloroedor
{
private:
    //Roedores* arreglo[10];
    int cantidad=0;
    vector<Roedores*> arreglo;
public:
    void llenar(Roedores *x);
    void mostrar();
};


