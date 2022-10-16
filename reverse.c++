#include <iostream>
using namespace std;

string reverseWord(string word)
{
    reverse(word.begin(), word.end());
    return word;
}

int main()
{
    string firstname = "Hugh";
    string lastname = "Jackman";

    firstname = reverseWord(firstname);
    lastname = reverseWord(lastname);
    cout << firstname << " " << lastname;
    return 0;
}
