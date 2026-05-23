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

        int k = 0;

        // find maximum drop
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                k = max(k, a[i] - a[i + 1]);
            }
        }

        // already sorted
        if (k == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        bool flag = true;

        int curr = a[0];

        for (int i = 1; i < n; i++)
        {
            if (a[i] >= curr)
            {
                curr = a[i];
            }
            else if (a[i] + k >= curr)
            {
                curr = a[i] + k;
            }
            else
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}