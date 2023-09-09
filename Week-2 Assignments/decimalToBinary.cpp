#include <iostream>
#include <math.h>
using namespace std;

int findBinary (int num)
{
    int rem = 0, binary = 0, i=0;
    while(num>0)
    {
        rem = num % 2;
        binary = rem* pow(10,i++)+binary;
        num /= 2;
    }
    return binary;
}

int main ()
{
    int num;
    cin >> num;

    int binary = findBinary(num);
    cout<<binary;
    return 0;
}
