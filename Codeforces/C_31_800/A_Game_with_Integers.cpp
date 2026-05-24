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
    int n;
    cin>>n;
    if((n+1)%3==0||(n-1)%3==0)
    cout<<"First"<<endl;
    else
    cout<<"Second"<<endl;
}
  return 0;
}