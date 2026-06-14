#include<iostream>
using namespace std; 
bool isPalindrome(char word[]);
main()
{
    char word[100];
    cout<<"Enter word ";
    cin>>word;
    if (isPalindrome(word)==true)
    {
        cout<<" is Palindrome";
    }
    else{ cout<<"not palindrome";}
}
bool isPalindrome(char word[])
{
    int length =0;
    for(int i=0; word[i]!='\0';i++)
    {
       length++;
    }
    for(int j=0; j<=length; j++)
    {
        length = length -1;
    if(word[j] != word[length])
    {
        return false;

    }
    return true;
    }
}