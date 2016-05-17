#include <iostream>

int sum(const int x, const int y)
{
    return x+y;
}

double sum_double(const double x, const double y)
{
    return x+y;
}

int main()
{
    std::cout << sum_double(2.3,4.5);
    return 0 ;
}
