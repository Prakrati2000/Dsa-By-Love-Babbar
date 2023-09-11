#include <iostream>
using namespace std;

int main ()
{
  int num;
  cin>>num;
  
  for(int row=0;row<num;row++)
  {
      int k=1;
      for(int col=0;col<2*num-1;col++)
      {
          if(col>=num-row-1 && col<=num+row-1)
          {
              
            cout<<k;
            if(col<=num/2+1)
            k++;
            else
            k--;
          
          }else
            cout<<" ";
           
      }
      cout<<endl;
  }
  return 0;
}
