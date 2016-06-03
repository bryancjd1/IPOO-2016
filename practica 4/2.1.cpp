#include<iostream>
using namespace std;
template<typename T>

T MIN(T t1, T t2)
{
    if(t1<t2)
    {
        return t1;
    }
    else
        return t2;
}

int main()
{
    cout<<MIN<int>(6,4)<<endl;
}
