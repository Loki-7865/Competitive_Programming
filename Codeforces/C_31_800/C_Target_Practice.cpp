#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <chrono>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
 char a[10][10];
 for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        cin>>a[i][j];
    }
 }
 int score[10][10]={
         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
         {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
         {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
         {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
         {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
         {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
         {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
         {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
         {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
 int c=0;
 for (int i = 0; i < 10; i++)
 {
     for (int j = 0; j < 10; j++)
     {
        if(a[i][j]=='X')
        c=c+score[i][j];
     }
 }
 cout<<c<<endl;
}
  return 0;
}