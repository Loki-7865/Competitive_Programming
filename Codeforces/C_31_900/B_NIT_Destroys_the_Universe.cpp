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
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int segment_count = 0;
        int count_zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                count_zero++;
        }
        if (count_zero == n)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0 && (i == 0 || a[i - 1] == 0))
                segment_count++;
        }
        if (segment_count > 1)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}