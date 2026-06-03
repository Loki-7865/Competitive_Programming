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
  cin>>t;
  while(t--){
    string t,s;
    cin>>s>>t;
    vector<long long>freq(26,0);
    for(int i=0;i<t.length();i++)
    freq[t[i]-'A']++;

    for(int i=s.length()-1;i>=0;i--){
        if(freq[s[i]-'A']>0)
        freq[s[i]-'A']--;
        else
        s[i]='.';
    }

    string final_str="";
    for(int i=0;i<s.length();i++){
        if(s[i]!='.')
        final_str+=s[i];
    }

    if(final_str==t)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}
  return 0;
}