// Program that prints ;
//  Input :
#include <cctype>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main()
{
    char user_input[30];
    char trimmed_name[20] = "";
    char user_end[10] = "";
    char front_end[10] = "FRONT";
    char back_end[10] = "BACK";
    int user_trim;
    int i;
    int count = 0;
    char input_capital[10];
    int size;
    int index;
    cout << "Enter any string ?"
         << "\n";
    cin >> user_input;
    cout << "How many letters would you like to trim ? "
         << "\n";
    cin >> user_trim;
    cout << "From which end would you like to trim off the letters ?"
         << "\n";
    cin >> user_end;
    for (int i = 0; i < strlen(user_end); i++)
    {
        input_capital[i] = toupper(user_end[i]);
    }
    cout << input_capital;
    index = user_trim;
    // if (strcmp(user_input, front_end) == 0)
    // {
    //     // cout << "say hi";
    //     for (int i = user_trim; i < strlen(user_input); i++)
    //     {
    //         // trimmed_name[i] = count;
    //         trimmed_name[count] = user_input[i];
    //         count = count + 1;
    //     }
    //     cout << trimmed_name;
    // //     // cout << count;
    // }
    // cout << user_end << back_end;
    if (strcmp(input_capital, back_end) == 0)
    {
        cout << "here";
        size = strlen(user_input) - user_trim;
        cout << size << user_input << trimmed_name;
        for (int i = 0; i < size; i++)
        {
            trimmed_name[i] = user_input[i];
        }
        cout << trimmed_name;
        cout << count;
    }

    return 0;
}

//     char name[30] = "Third Wave Coffee";
//     char trimmed_name[10];
//     int size;
//     size = strlen(name);
//     for (int i = 0; i < 10; i++)
//     {
//         trimmed_name[i] += name[i];
//     }
//     cout << trimmed_name;

// int size;
// char trimmed_name[15];
// size = strlen(name);
// // cout << size;
// for (int i = 0; size > 10; i--)
// {
//     trimmed_name[i] = name[i];
// }

// cout << trimmed_name;