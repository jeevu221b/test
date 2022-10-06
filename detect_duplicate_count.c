#include <stdio.h>
#include <string.h>
int main()
{
    char arr[5][10] = {"Thorkell", "Ned", "Thorkell", "Ned", "Ned"};
    char copy_original[5][10] = {};
    int i, j, count = 0;
    char temp[10] = "Zero";
    char uniq[5][10] = {};
    int count_arr[2] = {0, 0};
    for (i = 0; i < 5; i++)
    {
        strcpy(copy_original[i], arr[i]);
    }
    // for (i = 0; i < 5; i++)
    // {
    //     printf("%s\t", copy_original[i]);
    // }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(arr[i], arr[j]) == 0)
            {
                memcpy(arr[j], temp, sizeof(temp));
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (strcmp(arr[i], temp) != 0)
        {
            strcpy(uniq[i], arr[i]);
        }
    }
    // for (i = 0; i < 5; i++)
    // {
    //     printf("%s\n", uniq[i]);
    // }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (strcmp(uniq[i], copy_original[j]) == 0)
            {
                count_arr[i] = count_arr[i] + 1;
            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        printf(" %s - %d ", uniq[i], count_arr[i]);
    }
    return 0;
}