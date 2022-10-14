#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n, i, j;
    char input[n][10];
    char temp[] = "0";
    char result[n][10];
    char copy[n][10];
    cout << "Enter the length of array:";
    cin >> n;
    cout << "Enter the array elements :";

    for (i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    for (i = 0; i < n; i++)
    {
        strcpy(copy[i], input[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(input[i], input[j]) == 0)
            {
                memcpy(input[j], temp, sizeof(temp));
            }
        }
    }

    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (strcmp(input[i], temp) != 0)
        {
            count = count + 1;
            memcpy(result[i], input[i], sizeof(input[i]));
        }
    }

    int count_array[count] = {0};

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (strcmp(result[i], copy[j]) == 0)
            {
                count_array[i] = count_array[i] + 1;
            }
        }
    }
    for (i = 0; i < count; i++)
    {
        cout << result[i] << "-" << count_array[i] << "\n";
    }
    return 0;
}
