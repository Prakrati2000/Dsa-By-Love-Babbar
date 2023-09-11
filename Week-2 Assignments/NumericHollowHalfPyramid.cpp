#include <iostream>
using namespace std;

int main ()
{
  int num;
  cin>>num;
  
  for(int row=0;row<num;row++)
  {
      for(int col=0;col<num;col++)
      {
          if(col==0 || row==num-1 || row==col)
          {
              cout<<col+1;
          }
          else
          cout<<" ";
      }
      cout<<endl;
  }
  return 0;
}
