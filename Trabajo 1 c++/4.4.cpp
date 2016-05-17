#include <iostream>

int sum2(int x=3,int y=5)
{
    return x+y;
}

int sum3(const int x=4, const int y=5, const int z=6)
{
    return x+y+z;
}

int sum4(const int x=7, const int y=8, const int z=9, const int w=10)
{
    return x+y+z+w;
}


int main()
{
    std::cout << sum4();
    return 0 ;
}

