#include "Funcionario.h"

string Funcionario::get_nombre()
{
    return nombre;
}
float Funcionario::get_salario()
{
    return salario;
}
int Funcionario::get_fecha()
{
    return fecha;
}
void Funcionario::set_nombre(string name)
{
    nombre=name;
}
void Funcionario::set_salario(float salari)
{
    salario=salari;
}
void Funcionario::set_fecha(int date)
{
    fecha=date;
}
