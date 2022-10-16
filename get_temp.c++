#include <cctype>
#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;
int main()
{
    string cities[3][10] = {"London", "New York", "Delhi"};
    int temp[3] = {20, 25, 30};
    string input;
    bool match = false;
    cout << "Enter the name of the city :";
    cin >> input;
    int i;
    for (i = 0; i < 3; i++)
    {
        if (input == cities[i])
        {
            match = true;
        }
    }
    if (match == false)
    {
        cout << "We don't have this city available :("
             << "\n";
    }
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
