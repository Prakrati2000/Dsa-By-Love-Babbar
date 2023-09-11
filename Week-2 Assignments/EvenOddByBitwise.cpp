#include <iostream>
using namespace std;

void checkEven (int num)
{
  int rem = num & 1;
  if (rem == 0)
    cout << "Even";
  else
    cout << "Odd";

}

int main ()
{
  int num;
  cin >> num;
  checkEven (num);
  return 0;
}
