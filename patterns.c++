#include <iostream>
using namespace std;
int main()
{
    int i, j;

    for (j = 0; j <= 8; j++)
    {

        for (i = 0; i <= 30; i++)
        {
            if (j == 0 || j == 8)
            {
                cout << "*";
            }

            if (j >= 1 && j < 8)
            {
                if (i == 0 || i == 30)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}
// for (i = 1; i <= 30; i++)
// {
//     cout << "=";
// }
// cout << "\n";
// cout << "=";
// for (i = 1; i <= 28; i++)
// {
//     cout << " ";
// }
// for (i = 1; i < 2; i++)
// {
//     cout << "=";
// }
// cout << "\n";
// for (i = 1; i <= 28; i++)
// {
//     cout << " ";
// }
// for (i = 1; i <= 1; i++)
// {
//     cout << "=";
// }
