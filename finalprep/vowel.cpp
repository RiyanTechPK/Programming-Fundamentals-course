#include<iostream>
using namespace std;
int vowelcount(string word);
int consonantcount(string word);
main()
{
    cout<<" enter word ";
    string word; 
    cin>>word;
    int vowels = vowelcount(word);
    int cosonants = consonantcount(word);
    cout<<vowels;
    cout<<endl;
    cout<<cosonants;
}
int vowelcount(string word)
{
    int vowelcount =0;
    for(int i=0; i < word.length(); i++ )
    {
        
        if(word[i]== 'a' || word[i]== 'e' || word[i]== 'i' || word[i]=='o' || word[i]=='u'
             || word[i]== 'A' || word[i]== 'E' || word[i]== 'I' || word[i]=='O' || word[i]=='U')
             {
                vowelcount++;
             }
             
    }
    return vowelcount;
}
int consonantcount(string word)
{
    int consonantcount =0;
    for(int i=0; i < word.length(); i++ )
    {
        
        if(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] !='o' && word[i] !='u'
             && word[i] != 'A' && word[i] != 'E' && word[i] != 'I' && word[i] !='O' && word[i] !='U')
             {
                consonantcount++;
             }
    }
                 return consonantcount;

}