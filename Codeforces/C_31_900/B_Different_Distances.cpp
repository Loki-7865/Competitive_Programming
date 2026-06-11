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
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 == 0)
        {
            for (int i = 1; i <= n; ++i)
                cout << i << " ";
            for (int i = n; i >= 1; --i)
                cout << i << " ";
            for (int i = n; i >= 1; --i)
                cout << i << " ";
            for (int i = 1; i <= n; ++i)
                cout << i << " ";
            cout << "\n";
        }
        else
        {
            int m = (n + 1) / 2;
            vector<int> a(n);
            for (int i = 0; i < n; ++i)
            {
                a[i] = i + 1;
            }
            swap(a[m - 1], a[m]);

            for (int i = 0; i < n; ++i)
                cout << a[i] << " ";
            for (int i = n; i >= 1; --i)
                cout << i << " ";
            for (int i = n; i >= 1; --i)
                cout << i << " ";
            for (int i = 0; i < n; ++i)
                cout << a[i] << " ";
            cout << "\n";
        }
    }
    return 0;
}