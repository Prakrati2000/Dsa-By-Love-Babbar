#include <iostream>
using namespace std;

void createNumUsingDigits (int numOfDigits)
{
    int num;
    int digits=0;
    for(int i=0;i<numOfDigits;i++)
    {
        cin>>num;
        digits = digits*10+num;
    }
    cout<<digits;
}

int main ()
{
    int numOfDigits;
    cout<<"Enter total digits: ";
    cin >> numOfDigits;

    createNumUsingDigits(numOfDigits);
    return 0;
}
