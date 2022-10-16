#include <iostream>
using namespace std;
int main()
{
    int input[5] = {5, 4, 3, 2, 1};
    int i, j;
    int temp = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (input[i] > input[j])
            {
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        cout << input[i] << "\n";
    }
    return 0;
}