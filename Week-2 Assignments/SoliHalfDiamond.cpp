#include <iostream>
using namespace std;

int main()
{
    int num = 4;
    for (int row = 0; row < 2 * num - 1; row++)
    {
        for (int col = 0; col < num; col++)
        {
            if (row < (2 * num / 2) && col <= row)
            {
                cout << "*";
            }
            else
            {
                if (row >= (2 * num / 2) && col < 2 * num - row - 1)
                {
                    cout << "*";
                }
            }
        }
        cout << endl;
    }
}
