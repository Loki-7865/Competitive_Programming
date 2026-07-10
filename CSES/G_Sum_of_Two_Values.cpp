#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;

    vector<pair<long long, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        long long sum = a[start].first + a[end].first;

        if (sum == x)
        {
            cout << a[end].second << " " << a[start].second;
            return 0;
        }

        if (sum < x)
            start++;
        else
            end--;
    }

    cout << "IMPOSSIBLE";

    return 0;
}