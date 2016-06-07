#include<iostream>
using namespace std;
#include"Funcionario.h"
class Empresa
{
private:
    string nombre;
    int RUC;
    Funcionario trabajadores[10];
    int cantidad=0;
public:
    string gett_nombre();
    int get_RUC();
    void set_nombre(string name);
    void set_RUC(int ruc);
    void agregar_funcionario(Funcionario x);
    void mostrar_funcionarios();
    void aumento(Funcionario &x);
};
