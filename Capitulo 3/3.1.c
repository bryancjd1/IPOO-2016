#include <stdio.h>


int binsearch(int x, int s[], int n);

int main()
{
    int s[7] = {1,2,3,4,5,6,7};
    int x=2, n=7;
    printf("%d", binsearch(x, s, n));
    return 0;
}
int binsearch(int x, int s[], int n)
{
    int low,high,mid;
    low = 0;
    high = n-1;
    while(low<high)
    {
        mid = (high + low) /2;
        if(x <= s[mid])
            high= mid;
        else
            low = mid +1;
    }
    if(x==s[low])
        return low;
    else
        return -1;
}

