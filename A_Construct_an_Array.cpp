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
      cin >> n;
      for (int i = 1; i <= n; i++)
      {
          cout << 2 * i - 1 << " ";
      }
      cout << endl;
}
  return 0;
}