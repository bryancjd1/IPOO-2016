#include <iostream>
using namespace std;

int sum(const int numero, const int *arreglo)
{
    if(numero==0)
        return 0;
    else
        return arreglo[numero-1]+sum(numero-1,arreglo);
}

int main()
{
    int a[] = {3, 5, 7, 9, 11};

    cout << sum(5, a);

    return 0;
}

