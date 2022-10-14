#include <iostream>
using namespace std;
int add(int a, int b)
{
    int s;
    s = a + b;
    return s;
}
int mul(int a, int b)
{
    int s;
    s = a * b;
    return s;
}
int di(int a, int b)
{
    int s;
    s = a / b;
    return s;
}

int main()
{
    int a, b;
    cout << "Enter any number : ";
    cin >> a >> b;
    cout << add(a, b) << "\n";
    cout << mul(a, b) << "\n";
    cout << di(a, b) << "\n";
    return 0;
}
