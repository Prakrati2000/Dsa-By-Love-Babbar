
#include <iostream>
using namespace std;

int findFactorial (int num)
{
  int prod = 1;

  while (num >= 1)
    {
      prod *= num;
      num--;
    }
  return prod;
}

int main ()
{
  int num;
  cin >> num;

  int factorial = findFactorial (num);
  cout << factorial;

  return 0;
}
