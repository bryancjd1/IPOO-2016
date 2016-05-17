#include<iostream>
using namespace std;

void transpose(const int a[][2], int b[][3]);

int main()
{
    int matriz[3][2]={{1,2},{3,4},{5,6}};
    int matriz2[2][3];
    int a=3, b=2;
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<2; j++)
        {
            cout<<matriz[i][j]<<"  ";
        }
        cout<<endl;
    }
    transpose(matriz,matriz2);
    for (int i = 0; i<2; i++)
    {
        for (int j = 0; j<3; j++)
        {
            cout<<matriz2[i][j]<<"  ";
        }
        cout<<endl;
    }
}
void transpose(const int a[][2], int b[][3])
{
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            b[i][j] = a[j][i];
    return;
}
