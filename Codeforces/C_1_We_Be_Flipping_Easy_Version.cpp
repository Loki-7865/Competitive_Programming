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
    vector<long long>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    vector<long long>b;
    int flip=0;
    for(int i=n-1;i>=0;i--){
        int val=0;
        if (flip % 2 == 0)
            val = a[i];
        else
            val = -a[i];
        if(val>0){
        b.push_back(i+1);
        flip=flip^1;}

    }
    cout<<b.size()<<endl;
    for(int i=0;i<b.size();i++)
    cout<<b[i]<<" ";
    cout<<endl;
}
  return 0;
}