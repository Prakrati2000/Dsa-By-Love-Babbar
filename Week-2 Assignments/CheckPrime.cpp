
#include <iostream>
#include <math.h>
using namespace std;

bool checkPrime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cin>>num;
    
    bool isPrime = checkPrime(num);
    
    if(isPrime)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not a Prime";
    }
    
}
