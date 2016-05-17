#include<iostream>
using namespace std;

class Persona
{
    private:
        string name;
        int DNI;
    public:
        Persona(string nombre, int I){name=nombre; DNI=I;}
        string getname() {return name;}
        int getDNI() {return DNI;}
};

class Estudiante : public Persona
{
    private:
        int Codigo;
    public:
        Estudiante(string nombre, int I, int cod)
            : Persona (nombre, I) {Codigo=cod;}
        int getCodigo() {return Codigo;}
};
class Profesor : public Persona
{
    private:
        char* Materia;
    public:
        Profesor(string nombre, int I, char* mat)
            : Persona (nombre, I) {Materia=mat;}
        char* getMateria() {return Materia;}
};

int main()
{
    Persona Juan("JUAN", 23456);
    cout<<Juan.getname()<<" "<<Juan.getDNI()<<endl;
    Estudiante Marco("MARCO", 12345, 234);
    cout<<Marco.getname()<<" "<<Marco.getDNI()<<" "<<Marco.getCodigo()<<endl;
    Profesor Leo("LEO", 99853, "Matematica");
    cout<<Leo.getname()<<" "<<Leo.getDNI()<<" "<<Leo.getMateria()<<endl;
}
