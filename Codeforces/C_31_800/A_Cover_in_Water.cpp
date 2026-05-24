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
        string s;
        cin >> s;

        // c -> consecutive dots count karne ke liye
        // dots -> total dots count
        int c = 0;
        int dots = 0;

        // ok true hoga agar kahi bhi "..."
        // yani 3 consecutive dots mil jaye
        bool ok = false;

        for (int i = 0; i < n; i++)
        {
            // Agar current cell empty hai
            if (s[i] == '.')
            {
                c++;    // consecutive dots badhao
                dots++; // total dots count karo
            }
            else
            {
                // '#' milte hi consecutive count reset
                c = 0;
            }

            // Agar 3 consecutive dots mil gaye
            // toh answer direct 2 ho jayega
            if (c >= 3)
                ok = true;
        }

        // Agar "..." exist karta hai
        // toh minimum operations = 2
        if (ok)
            cout << 2 << endl;

        // warna jitne dots hain utna hi answer
        else
            cout << dots << endl;
    }
}