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
    int n;
    cin >> n;
    vector<pair<long long, long long>> movies;
    for (int i = 0; i < n; i++)
    {
        long long a, b;
        cin >> a >> b;
        movies.push_back({b, a});
    }
    sort(movies.begin(), movies.end());
    long long lastEnd = 0;
    int ans = 0;
    for (auto movie : movies)
    {
        long long end = movie.first;
        long long start = movie.second;
        if (start >= lastEnd)
        {
            ans++;
            lastEnd = end;
        }
    }
    cout << ans << "\n";
    return 0;
}