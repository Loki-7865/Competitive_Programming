#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve()
{
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  // frequency of each original number
  unordered_map<int, int> mp;

  for (auto x : a)
    mp[x]++;

  /*
      store[value] = {how many numbers can reach it,
                      total operations needed}
  */
  unordered_map<int, pair<int, int>> store;

  // process every distinct number
  for (auto x : mp)
  {
    int curr = x.first;
    int freq = x.second;

    int steps = 0;

    vector<int> path;

    while (true)
    {
      // check repeated state
      bool repeated = false;

      for (int p : path)
      {
        if (p == curr)
        {
          repeated = true;
          break;
        }
      }

      if (repeated)
        break;

      path.push_back(curr);

      // update store
      auto &v = store[curr];

      // how many numbers can reach curr
      v.first += freq;

      // total operations
      v.second += freq * steps;

      // operation
      if (curr % 2 == 0)
        curr /= 2;
      else
        curr += 1;

      steps++;
    }
  }

  int ans = -1;

  // find minimum valid answer
  for (auto x : store)
  {
    int reachableCount = x.second.first;
    int totalOperations = x.second.second;

    // all numbers can reach this value
    if (reachableCount == n)
    {
      if (ans == -1 || totalOperations < ans)
      {
        ans = totalOperations;
      }
    }
  }

  cout << ans << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}