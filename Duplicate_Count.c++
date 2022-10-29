#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    int input[8] = {10, 88, 99, 1, 4, 10, 88, 99};
    int temp = 0;
    int i, j;
    int count = 0;

    // Replacing the duplicate with Zero
    for (i = 0; i < 8; i++)
    {
        for (j = i + 1; j < 8; j++)
        {
            if (input[i] == input[j])
            {
                input[j] = temp;
            }
        }
    }
    // Counting duplicate
    for (i = 0; i < 8; i++)
    {
        // cout << input[i] << "\n";
        if (input[i] == temp)
        {
            count = count + 1;
        }
    }
    cout << " Duplicate count = " << count;
    return 0;
}
