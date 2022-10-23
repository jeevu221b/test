#include <cctype>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main()
{
    char cities[3][10] = {"LONDON", "NEW YORK", "DELHI"};
    int temp[3] = {20, 25, 30};
    char input[10];
    char input_capital[10];
    cout << "Enter the name of the city :";
    cin >> input;
    int i;
    bool match = false;
    for (int i = 0; i < strlen(input); i++)
    {
        input_capital[i] = toupper(input[i]);
    }
    cout << input_capital;
    for (i = 0; i < 3; i++)
    {

        if (input_capital == cities[i])
        {
            match = true;

            cout << " The temperature of " << cities[i] << " is = " << temp[i];
        }
    }
    if (match == false)
    {
        cout << "\n"
             << " Sorry we don't have this city available ";
    }
    return 0;
}