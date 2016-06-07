#include<iostream>

#include "Funcionario.h"
#include "Empresa.h"
using namespace std;

int main()
{
    Empresa empresa;
    Funcionario trabajador;
    trabajador.set_nombre("juan");
    trabajador.set_salario(200);
    empresa.agregar_funcionario(trabajador);
    empresa.mostrar_funcionarios();
    empresa.aumento(trabajador);
    cout<<trabajador.get_salario();
}
