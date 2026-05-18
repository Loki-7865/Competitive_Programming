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
 int N;
 cin>>N;
 vector<long long>a(N);
 for(int i=0;i<N;i++)
 cin>>a[i];
long long ans=INT_MAX;
for(int i=0;i<N;i++){
    if(abs(a[i])<ans)
    ans=abs(a[i]);
}
cout<<ans;
  return 0;
}