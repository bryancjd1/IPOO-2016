#include<stdio.h>
#include<limits.h>
int main()
{
    printf("El rango de char = %d - %d\n", SCHAR_MIN,SCHAR_MAX);
    printf("El rango de int = %d - %d\n", INT_MIN, INT_MAX);
    printf("El rango de unsigned char = %d\n", UCHAR_MAX);
    printf("El rango de short es = %d - %d\n", SHRT_MIN,SHRT_MAX);
    printf("El rango de long es = %ld - %ld\n", LONG_MIN, LONG_MAX);
    printf("El rango de unsigned INT = %u\n", UINT_MAX);
    printf("El rango de unsigned long es = %lu -\n", ULONG_MAX);
    

    return 0;
}    
