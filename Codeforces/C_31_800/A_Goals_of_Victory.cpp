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
    long long n;
    cin>>n;
    long long sum=0;
    vector<long long>a(n-1);
    for(int i=0;i<n-1;i++){
    cin>>a[i];
    sum=sum+a[i];
    }
if(sum>0)
cout<<(0-sum)<<endl;
else
cout<<abs(sum)<<endl;
}
  return 0;
}