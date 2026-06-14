#include <iostream>
using namespace std;
string reverseword(string word);
main()
{
    cout << "enter the word : ";
    string word;
    cin >> word;
    string newword = reverseword(word);
    cout<< newword;
}
string reverseword(string word)
{
    int i = 0;
    int j = word.length() - 1;
    for (int i = 0; i < j; i++)
    {
        int temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        j--;
    }
    return word;
}
