#pragma once
#include<iostream>
using namespace std;
class Funcionario
{
private:
    string nombre;
    float salario;
    int fecha;
public:
    string get_nombre();
    float get_salario();
    int get_fecha();
    void set_nombre(string name);
    void set_salario(float salari);
    void set_fecha(int date);

};
