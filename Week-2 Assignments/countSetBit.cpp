#include <iostream>
using namespace std;

int countSetBit (int num)
{
    int total_bits=0;
    while(num>0)
    {
        int rem = num%2;
        if(rem)
            total_bits++;
        num/=2;
    }
    return total_bits;
}

int main ()
{
    int num;
    cin >> num;
    int total_bit = countSetBit(num);
    cout<<total_bit;
    return 0;
}
