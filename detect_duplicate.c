#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char all[5][10] = {"Stark", "Logan", "Stark", "Logan", "Logan"};
    char temp[10] = "zero";
    int i = 0, j;
    char unique[5][10] = {};
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(all[i], all[j]) == 0)
            {
                memcpy(all[j], temp, sizeof(temp));
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (strcmp(all[i], temp) != 0)
        {
            memcpy(unique[i], all[i], sizeof(all[i]));
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%s\t", unique[i]);
    }
    return 0;
}