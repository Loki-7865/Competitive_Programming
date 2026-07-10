#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    long long reachable = 0;
    for (long long coin : a)
    {
        if (coin > reachable + 1)
            break;
        reachable += coin;
    }
    cout << reachable + 1;
    return 0;
}