#include <iostream>

void DoubleNumber(int &num) {num = num*2;}

int main()
{
    int num = 35;
    DoubleNumber(num);
    std::cout << num;
    return 0 ;
}

