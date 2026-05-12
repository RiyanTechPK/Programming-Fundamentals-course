#include <iostream>
using namespace std;
char matrix[5][5] =
        {{'.', '.', '.', '*', '*'},
         {'.', '*', '.', '.', '.'},
         {'.', '*', '.', '.', '.'},
         {'.', '*', '.', '.', '.'},
         {'.', '.', '*', '*', '.'}};
string check(char matrix[5][5], string location);
main()
{ 
   
         cout<<"enter the location ";
         string location1;
         cin>>location1;
         cout<<check(matrix,location1);
}
string check(char matrix[5][5], string location)
{
   int row= location[0]-'A';
    int col= location[1]-'1';
    if(matrix[row][col]=='*')
    {
        return "boom";
    }
    if(matrix[row][col]=='.')
    {
        return "splash";
    }
}