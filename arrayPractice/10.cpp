#include <iostream>
using namespace std;
main()
{
    cout << "enter the word ";
    char word[100];
    cin >> word;
    int i = 0;
    while (word[i] != '\0')
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            if (word[i] == 'z')

                word[i] == 'a';

            else

              word[i] = word[i] + 1;
        }
        i++;
    }
    cout << "new word " << word;
}