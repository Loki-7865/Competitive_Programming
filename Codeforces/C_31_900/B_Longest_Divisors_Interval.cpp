#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <chrono>
#include <numeric>
using namespace std;

// This program calculates the longest interval of divisors for a given number n.
// The interval [l, r] is such that n is a multiple of every integer i in the interval.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        // Read the integer n for each test case
        long long n;
        cin >> n;

        // Initialize i to 1, which will be used to find the maximum interval
        int i = 1;
        // Increment i until n is not divisible by i
        while (n % i == 0) // O(60)
            i++;
        // Output the size of the maximum interval
        cout << i - 1 << endl;
    }
    return 0;
}

// Time Complexity (TC): O(60) ~ O(log2(n))
// Space Complexity (SC): O(1)
