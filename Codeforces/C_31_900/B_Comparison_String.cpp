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
        string s;
        cin >> s;
        long long longest_streak = 1;
        long long maxl = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] == s[i])
                longest_streak++;
            else{
            maxl = max(longest_streak, maxl);
            longest_streak = 1;
            }
        }
        maxl = max(longest_streak, maxl);
        cout << maxl + 1 << endl;

    }
}