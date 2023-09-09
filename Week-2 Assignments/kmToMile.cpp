#include <iostream>
using namespace std;

float kmToMiles (float km, float miles)
{
    float total_miles = miles*km;
    return total_miles;
}

int main ()
{
    int km;
    cin >> km;
    float _1Mile = 0.621371;
    float miles = kmToMiles(km, _1Mile);
    cout<<miles;
    return 0;
}
