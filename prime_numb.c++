#include <cctype>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main()
{
    int input;
    int count = 0;
    int i;
    cout << "Enter any number ?"
         << "\n";
    cin >> input;
    for (i = 2; i < input; i++)
    {
        cout << i;
        if (input % i == 0 && input % 1 == 0)
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
    {
        cout << "composite";
    }
    else
    {
        cout << "prime";
    }
    return 0;
}