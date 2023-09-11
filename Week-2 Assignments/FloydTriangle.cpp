#include <iostream>
using namespace std;

int main ()
{
  int num;
  cin>>num;
  
  int k=1;
  for(int row=0;row<num;row++)
  {
      for(int col=0;col<=row;col++)
      {
          cout<<k;
          k++;
      }
      cout<<endl;
  }
  return 0;
}
