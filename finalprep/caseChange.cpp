#include<iostream>
using namespace std; 
string toLowercase(char word[]);
string toUppercase(char word[]);

main()
{
    char word[100];
    cout<<"Enter word ";
    cin>>word;
    toLowercase( word);
    cout<<"lower case : \n";
    cout<<word;
    toUppercase(word);
    cout<<"\nTo uppercase ";
    cout<<word;


}
string toLowercase(char word[])
{
    
    for(int j=0; word[j] != '\0'; j++)
    {
        if(word[j]>='A' && word[j] <='Z')
        {
            word[j] = word[j]+32;
        }
        // return word;
    }
}
string toUppercase(char word[])
{
    for(int l=0; word[l] != '\0' ; l++)
    {
       if(word[l]>='a' && word[l]<='z')
       {
        word[l] = word[l]-32;
       }
    }
    // return word;
}
