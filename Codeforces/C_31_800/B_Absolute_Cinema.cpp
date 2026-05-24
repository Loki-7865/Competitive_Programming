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
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        long long sum = 0;
        long long extra = 0;
        for (int i = 0; i < n; i++)
        {
            sum += max(a[i], b[i]);
            extra = max(extra, (long long)min(a[i], b[i]));
        }
        cout << sum + extra << endl;
    }
    return 0;
}