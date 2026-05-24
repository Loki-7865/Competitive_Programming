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
    for(int i=0;i<n;i++)
    cin>>a[i];
    int c=0;int cmax=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
        c++;
        if(c>cmax){
        cmax=c;}}
        else c=0;
    }
    cout<<cmax<<endl;
}
  return 0;
}