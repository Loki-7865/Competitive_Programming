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
     vector<long long>a(n);
     vector<long long>b(n);
     for(int i=0;i<n;i++)
     cin>>a[i];
     
     for(int i=n-1;i>=0;i--)
    b[i]=n+1-a[i];
    for(int i=0;i<n;i++)
    cout<<b[i]<<" ";
    cout<<endl;
}
  return 0;
}