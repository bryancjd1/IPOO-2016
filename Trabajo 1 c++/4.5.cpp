#include <iostream>
using namespace std;

int sum(const int numero, const int *arreglo)
{
    int suma = 0;
    for (int i = 0; i < numero; i++) {
         suma += arreglo[i];
    }
    return suma;
}

int main()
{
    int a[] = {3, 5, 7, 9, 11};

    cout << sum(5, a);

    return 0;
}
