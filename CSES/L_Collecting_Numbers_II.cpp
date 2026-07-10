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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> arr(n + 1), pos(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pos[arr[i]] = i;
    }
    int rounds = 1;
    for (int i = 2; i <= n; i++)
    {
        if (pos[i] < pos[i - 1])
            rounds++;
    }
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        int x = arr[a];
        int y = arr[b];
        set<pair<int, int>> affected;
        if (x > 1)
            affected.insert({x - 1, x});
        if (x < n)
            affected.insert({x, x + 1});
        if (y > 1)
            affected.insert({y - 1, y});
        if (y < n)
            affected.insert({y, y + 1});
        for (auto p : affected)
        {
            if (pos[p.second] < pos[p.first])
                rounds--;
        }
        swap(arr[a], arr[b]);
        swap(pos[x], pos[y]);
        for (auto p : affected)
        {
            if (pos[p.second] < pos[p.first])
                rounds++;
        }
        cout << rounds << "\n";
    }

    return 0;
}