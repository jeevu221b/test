#include <cctype>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main()
{

    char i, j, k, space = 10;
    for (i = 5; i >= 1; i--)
    {
        for (k = 0; k < space; k++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
        
    }
    return 0;
}

// int i, j;
// char output = '*';
// int counter = 1;
// int limit = 6;
// for (i = 11; i >= 1; i--)
// {
//     for (j = 1; j <= limit; j++)
//     {
//         cout << output;
//     }
//     if (i >= 7)
//     {
//         limit = i - 6;
//     }
//     if (i <= 6)
//     {
//         limit = counter + 1;
//         counter = counter + 1;
//     }
//     cout << "\n";
// }
//     // return 0;
// }
