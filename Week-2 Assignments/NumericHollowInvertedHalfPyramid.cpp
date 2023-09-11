#include <iostream>
using namespace std;

int main ()
{
  int num;
  cin>>num;
  
  for(int row=0;row<num;row++)
  {
      int k = row+1;
      for(int col=0;col<num;col++)
      {
          if(row==0 || col==0 || col==num-row-1)
          {
            cout<<k;
          }
          else
          {
            cout<<" ";
          }
          k += 1;
      }
      cout<<endl;
  }
  return 0;
}
