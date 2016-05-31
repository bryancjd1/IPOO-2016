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

class List
{
    private:
        Node *primero;
        Node *ultimo;
    public:
        List()
        {
            primero=ultimo=NULL;
        }
        void insert(int valor)
        {
            Node *temp=new Node(valor);
            if(primero=NULL)
            {
                primero=ultimo=temp;
            }
            else
            {
                temp->next=primero;
                primero=temp;
            }
        }
        void eliminar(int valor)
        {
            Node *aux=primero;
            Node *aux2=primero->next;
            if(primero=NULL)
                cout<<"Lista vacia"<<endl;
            else
                while(aux2!=NULL)
                {
                    if(aux2->val=valor)
                    {
                        Node *temp=aux2;
                        aux->next=aux2->next;
                        delete temp;
                        valor=0;
                    }
                    aux2=aux2->next;
                    aux=aux->next;
                }
                if(valor!=0)
                {
                    cout<<"numero no encontrado"<<endl;
                }
        }
        void imprimir()
        {
            Node *aux=primero;
            if(primero=NULL)
                cout<<"Lista vacia"<<endl;
            else
            {
                while(aux!=NULL)
                {
                    cout<<aux->val<<endl;
                    aux=aux->next;
                }
            }
        }
        void ordenado(int valor)
        {
            Node *temp=new Node(valor);
            Node *aux=primero;
            if(primero=NULL)
            {
                primero=ultimo=temp;
            }
            else
            {
                while(aux!=NULL)
                {
                    if(aux->val>temp->val)
                    {
                        temp->next=aux->next;
                        aux->next=temp;
                        aux=NULL;
                    }
                    aux=aux->next;

                }
            }
        }

};
