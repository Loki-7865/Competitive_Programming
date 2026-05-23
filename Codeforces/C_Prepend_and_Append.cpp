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
        string a;
        cin>>a;
        int c = n;
        int left = 0;
        int right = n-1;
       while(left<=right)
       {
        if(a[left]!=a[right])
        c=c-2;
        else
        break;
        left++;
        right--;
       }

        cout << c << endl;
    }
    return 0;
}