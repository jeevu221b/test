#include <iostream>
using namespace std;

int main()
{

    // //    * * * * *
    // //    * * * * *

    // int row, column;
    // int i, j;
    // cout << "Enter the number of rows : ";
    // cin >> row;
    // cout << "Enter the number of column : ";
    // cin >> column;
    // for (i = 1; i <= column; i++)
    // {
    //     for (j = 1; j <= row; j++)
    //     {
    //         cout << "*"
    //              << " ";
    //     }
    //     cout << endl;
    // }

    // i=    012345678
    // j = 0 * * * * *
    // j = 1 *       *
    // j = 2 * * * * *

    //     int row, column;
    //     int i, j;
    //     cout << " Enter the number of rows : ";
    //     cin >> row;
    //     cout << " Enter the number of column : ";
    //     cin >> column;
    //     for (j = 0; j < column; j++)
    //     {
    //         for (i = 0; i < row; i++)
    //         {
    //             if (j == 0 || j == 2)
    //             {
    //                 if (i == 0 || i % 2 == 0)
    //                 {
    //                     cout << "*";
    //                 }
    //                 else
    //                 {
    //                     cout << " ";
    //                 }
    //             }
    //             if (j == 1)
    //             {
    //                 if (i == 0 || i == 8)
    //                 {
    //                     cout << "*";
    //                 }
    //                 else
    //                 {
    //                     cout << " ";
    //                 }
    //             }
    //         }
    //         cout << endl;
    //     }
    //     return 0;
    // }
    // counter = 3 counter = counter - 1
    //  i = 012345
    // j=0  ****** 4
    //  =1  *   * 3
    //  =2  *  * 2
    //  =3  * * 1
    //  =4  ** 0
    //  =5  *

    // j =1
    // i=0

    int i, j;

    cout << endl;
    int counter = 0;
    for (j = 0; j < 6; j++)
    {
        for (i = 0; i <= 5; i++)
        {
            if (j == 0)
            {
                cout << "*";
            }
            else if (j == 5 && i == 0)
            {
                cout << "*";
            }
            else if (j >= 1 || j <= 4)
            {
                if (i == 0)
                {
                    cout << "*";
                }
                else if (counter == 0)
                {
                    cout << "*";
                    counter = counter - 1;
                }
                else if (counter > 0)
                {
                    cout << " ";
                    counter = counter - 1;
                }
            }
        }
        cout << "\n";
        counter = 3 - j;
    }

    return 0;
    // j = 1, i = 3, counter = 1
}