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

class Cola
{
    private:
        Node *primero;
        Node *ultimo;
    public:
        Cola()
        {
           primero=NULL;
           ultimo=NULL;
        }
        void insert(int valor)
        {
            Node *aux=new Node(valor);
            if(primero==NULL)
            {
                primero=ultimo=aux;
                aux->next=NULL;
            }
            else
            {
                aux->next=NULL;
                ultimo->next=aux;
                ultimo=aux;
            }
        }
        void quitar()
        {
            Node *aux=primero;
            if(primero==NULL)
            {
                cout<<"No hay elementos"<<endl;
            }
            primero->next=primero;
            delete aux;
        }
        void imprimir()
        {
            Node *aux=primero;
            while(aux!=NULL)
            {
                cout<<"  " << aux->val;
                aux=aux->next;
            }
        }
};
int main()
{
    Cola cola;
    cola.insert(3);
    cola.insert(4);
    cola.insert(5);

    cola.imprimir();
}
