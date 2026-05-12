#include<iostream>
using namespace std;
char matrix[5][5] =
        {{'.', '.', '.', '*', '*'},
         {'.', '*', '.', '.', '.'},
         {'.', '*', '.', '.', '.'},
         {'.', '*', '.', '.', '.'},
         {'.', '.', '*', '*', '.'}};


string array(char matrix[5][5], string location);
 main()
 {
   cout<<"enter location " ;
   string location;
   cin>>location;
   cout<<array(matrix, location);
 }
 string array(char matrix[5][5], string location)
 {
   int rows = location[0]-'A';
   int cols = location[1] -'1';
   if(matrix[rows][cols]=='*')
   {
    return "booom";
   }
   if(matrix[rows][cols]=='.')
   {
    return "splash";
   }
 }