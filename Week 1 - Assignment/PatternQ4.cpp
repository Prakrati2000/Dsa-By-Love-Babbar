#include <iostream>

using namespace std;

int
main ()
{
  int num;
  cin >> num;

  for (int row = 0; row < num; row++)
    {
      int k = 0;
      for (int col = 0; col < (2 * num - 1); col++)
	{
	  if (col < num - row - 1)
	    cout << "  ";
	  else if (k < 2 * row + 1)
	    {
	      if (k == 0 || k == 2 * row || row == num - 1)
		cout << "* ";
	      else
		cout << "  ";
	      k++;
	    }

	  else
	    cout << "  ";

	}
      cout << endl;
    }
  return 0;
}
