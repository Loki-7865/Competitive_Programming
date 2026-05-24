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
    int odd_count=0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0)
        odd_count++;
    }
    if(odd_count%2==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
  return 0;
}