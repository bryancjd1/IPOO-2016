#include <iostream>
using namespace std;

int main()
{
    int sizee;
    cin>> sizee;
    int *nums = new int[sizee];
    for (int i=0;i<sizee; ++i)
    {
        cin>>nums[i];
    }
    delete[] nums;
}
