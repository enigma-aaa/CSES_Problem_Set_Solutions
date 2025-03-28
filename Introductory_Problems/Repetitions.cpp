#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    string s;
    cin>>s;
    ll cur_count = 0 ;
    ll max_count = 0 ;
    char last_char = ' ';
    ll n = s.size();
    for(ll i = 0 ; i<n ; i++)
    {
        if(s[i] == last_char)
        {
            cur_count++;
        }
        else 
        {
            max_count = max(max_count,cur_count);
            cur_count = 1;
            last_char = s[i];
        }
    }
    max_count = max(max_count , cur_count);
    cout<<max_count<<endl;
}

int main()
{
    solve();
}