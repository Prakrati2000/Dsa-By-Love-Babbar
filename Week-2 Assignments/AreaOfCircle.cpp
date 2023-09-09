#include <iostream>
#include <math.h>
using namespace std;

float circleArea(float radius)
{
    float area = (22*pow(radius,2))/7;
    return area;
}

int main ()
{
  int radius;
  cin >> radius;
  
  float area = circleArea(radius);
  cout<<area;
    
  return 0;
}
