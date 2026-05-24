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
    int k=-1;
    int two_count=0;
    for(int i=0;i<n;i++){
        if(a[i]==2)
        two_count++;
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]==2)
            c++;
            if(c==(two_count-c)){
            k=i+1;
            break;}
        }
        cout<<k<<endl;
    }
}
