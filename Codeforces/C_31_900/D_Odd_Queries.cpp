#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, q;
        cin >> n >> q;

        vector<long long> arr(n + 1);
        vector<long long> prefix(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];

            prefix[i] = prefix[i - 1] + arr[i];
        }

        long long totalSum = prefix[n];

        while (q--)
        {
            long long l, r, k;
            cin >> l >> r >> k;

            long long originalSegmentSum =
                prefix[r] - prefix[l - 1];

            long long newSegmentSum =
                (r - l + 1) * k;

            long long newTotalSum =
                totalSum - originalSegmentSum + newSegmentSum;

            if (newTotalSum % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}