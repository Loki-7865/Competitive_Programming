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
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        bool ok = true;

        for (int i = 0; i + 2 < n; i++)
        {
            if (a[i] % a[i + 1] != a[i + 2])
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << a[0] << " " << a[1] << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}