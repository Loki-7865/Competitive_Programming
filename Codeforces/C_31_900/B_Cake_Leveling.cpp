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
        long long sum = 0;
        long long minn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            minn = min(minn, sum / (i + 1));
            cout << minn << " ";
        }
        cout << endl;
    }
    return 0;
}