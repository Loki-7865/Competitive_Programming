#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <chrono>
#include <climits>
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
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    int low=INT_MAX;int lowf=6;
    for(auto pr:m){
        if(pr.first<low&&(pr.second>=lowf/2)){
     low=pr.first;
     lowf=pr.second;
        }
    }
    cout<<low<<" "<<lowf;
}
  return 0;
}