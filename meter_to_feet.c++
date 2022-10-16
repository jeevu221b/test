#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;
float convert(float);
int main()
{
    float meter;
    float calc;
    cout << " Enter the measurement in  meters : ";
    cin >> meter;
    calc = convert(meter);
    cout << " The measurement in feet = " << setprecision(2) << calc;
    return 0;
}
float convert(float meter)
{
    return (meter * 3.28);
}