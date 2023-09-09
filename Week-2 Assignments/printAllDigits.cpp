#include <iostream>
using namespace std;

void printAllDigits (int num)
{
  while(num>0)
  {
      int rem = num%10;
      cout<<rem<<endl;
      num/=10;
  }
}

int main ()
{
    int num;
    cin >> num;

    printAllDigits(num);
    return 0;
}
