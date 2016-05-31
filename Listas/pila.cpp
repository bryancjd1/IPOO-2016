#include<iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        next=NULL;
    }

};

class Pila
{
    private:
        Node *cima;
    public:
        Pila()
        {
            cima=NULL;
        }
        void insert(int valor)
        {
            Node *temp= new Node(valor);
            temp->next=cima;
            cima=temp;
        }
        int sacar(int valor)
        {
            Node * temp=cima;
            int aux=cima->val;
            cima=cima->next;
            delete temp;
            return aux;
        }
        void mostrar()
        {
            Node *aux;
            aux=cima;
            while(aux!=NULL)
            {
                cout<<aux->val<<endl;
                aux=aux->next;
            }
        }
};
int main()
{
    Pila pila;

    pila.insert(2);
    pila.insert(3);
    pila.insert(4);
    pila.insert(5);
    pila.mostrar();
}
