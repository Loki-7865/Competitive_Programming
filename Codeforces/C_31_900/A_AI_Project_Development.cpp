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
      long long n, x, y, z;
      cin >> n >> x >> y >> z;
      long long withoutAI =
          (n + (x + y) - 1) / (x + y);
      long long withAI;
      if (x * z >= n)
      {
          withAI = (n + x - 1) / x;
      }
      else
      {
          long long remaining = n - x * z;
          long long extra =
              (remaining + (x + 10 * y) - 1) /
              (x + 10 * y);
          withAI = z + extra;
      }
      cout << min(withoutAI, withAI) << "\n";
}
  return 0;
}