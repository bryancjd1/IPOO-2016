#include<iostream>
#include<vector>
using namespace std;
template < class T> class Stack ;
template<class T>
Stack<T> operator+(Stack<T> &x, Stack<T> &y);
template <class T>
class Stack
{
    private:
        vector<T> item;
    public:
        friend Stack <T> operator +<>( Stack <T> &s1 , Stack <T> &s2);
        bool empty()
        {
            return item.empty();
        }
        void push(T newitem)
        {
            item.push_back(newitem);
        }
        T top()
        {
            T aux = item.back();
            return aux;
        }
        void pop()
        {
            item.pop_back();
        }
        void Imprimir()
        {
            for(T i=item.size()-1;i>=0;i--)
            {
                cout<<item[i]<<endl;
            }
        }
};
template<class T>
Stack<T> operator+(Stack<T> &x, Stack<T> &y)
{
    Stack <T> z = x;
    for ( T i = 0; i < y.item.size();++i)
    {
        z.item.push_back(y.item[i]);
    }
    return z;

}
int main()
{
    Stack<int> a,b;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(5);
    b.push(4);

    Stack<int> c=a+b;
    c.Imprimir();

}
