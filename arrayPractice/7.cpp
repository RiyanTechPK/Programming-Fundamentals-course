#include <iostream>
using namespace std;
main()
{
    string word;
    char letter;
    cout << "enter the word ";
    cin >> word;
    cout << "enter the letter you want to find ";
    cin >> letter;
    bool found = false;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == letter)
        {
            found = true;
            break;
        }
    }
    if (found == true)
    {
        cout << letter << " is present in " << word;
    }
    else
    {
        cout << letter << " is not present in " << word;
    }
}
