#include <iostream>

int sum2(const int x, const int y)
{
    return x+y;
}

int sum3(const int x, const int y, const int z)
{
    return x+y+z;
}

int sum4(const int x, const int y, const int z, const int w)
{
    return x+y+z+w;
}


int main()
{
    std::cout << sum4(2,3,4,5);
    return 0 ;
}

