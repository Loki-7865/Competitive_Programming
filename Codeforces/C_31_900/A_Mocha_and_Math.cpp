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
        long long total_and=a[0]; 
        for (int i = 1; i < n; i++)
        {
            total_and&=a[i];
        }
        cout<<total_and<<endl;
}
  return 0;
}