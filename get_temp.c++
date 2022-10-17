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
    char input_capital;
    cout << "Enter the name of the city :";
    cin >> input;
    for (int i = 0; i < strlen(input); i++)
    {
        input_capital = toupper(input[i]);

        cout << input_capital;
    }

    // char cities[3][10] = {"LONDON", "NEW YORK", "DELHI"};
    // int temp[3] = {20, 25, 30};
    // char input;
    // bool match = false;
    // cout << "Enter the name of the city :";
    // cin >> input;
    // int i;
    // char ch;
    // ch = toupper(input);
    // cout << ch;

    // char input_capital;
    // char ch = toupper(input);
    // cout << ch;
    // input_capital = toupper(input);

    // for (i = 0; i < 3; i++)
    // {
    //     if (input_capital == cities[i])
    //     {
    //         match = true;
    //     }
    // }
    // if (match == true)
    // {
    //     cout << "We don't have this city available :("
    //          << "\n";
    // }
    return 0;
}

//     char firstname[] = "Hugh";
//     char lastname[] = "Jackman";
//     char ch;
//     for (int i = 0; i < strlen(firstname); i++)
//     {
//         // convert str[i] to uppercase
//         ch = toupper(firstname[i]);

//         cout << ch;
//     }

// return 0;
// }