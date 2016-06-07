#pragma once
#include<iostream>
using namespace std;
class Roedores
{
protected:
    int edad;
    string genero;
public:
    int get_edad();
    string get_genero();
    virtual void comer(){};
    virtual void caminar(){};
    virtual void comunicarse(){};
};
