#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int med = a[n / 2];
        int L = 0, R = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < med)
                L++;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] > med)
                R++;
        }
        cout << max(L, R) << "\n";
    }

    return 0;
}