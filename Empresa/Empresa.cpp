#include "Empresa.h"
string Empresa::gett_nombre()
{
    return nombre;
}
int Empresa::get_RUC()
{
    return RUC;
}
void Empresa::set_nombre(string name)
{
    nombre=name;
}
void Empresa::set_RUC(int ruc)
{
    RUC=ruc;
}
void Empresa::agregar_funcionario(Funcionario x)
{
    trabajadores[cantidad]=x;
    cantidad++;
}
void Empresa::mostrar_funcionarios()
{
    for(int i=0;i<10;i++)
    {
        cout<<trabajadores[i].get_nombre()<<endl;
    }
}
void Empresa::aumento(Funcionario &x)
{
    x.set_salario(x.get_salario()+x.get_salario()*10/100);
}
