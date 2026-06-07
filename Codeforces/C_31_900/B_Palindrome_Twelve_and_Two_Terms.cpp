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
    long long pal[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 22, 11};
    while (t--)
    {
        long long n;
        cin >> n;
        long long a = pal[n % 12];
        if (a > n)
            cout << -1 << endl;
        else
            cout << a << " " << n - a << endl;
    }
    return 0;
}