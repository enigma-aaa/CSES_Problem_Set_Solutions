#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findIndexGreater(char c, string& s)
{
    int n = s.size();
    for(int i = n-1 ; i>=0 ; i--)
    {
        if(s[i]>c)
        {
            return i;
        }
    }
    return -1;
}

string next_perm(string s)
{
    int n = s.size();
    int i = n-1;
    for(; i>=0 ; i--)
    {
        if(i!=0 && s[i]>s[i-1])
        {   
            int j = findIndexGreater(s[i-1], s);
            swap(s[i-1],s[j]);
            reverse(s.begin()+i,s.end());
            return s;
        }
    }
    reverse(s.begin(),s.end());
    return s;
}

void solve()
{
    vector<ll>fact(9);
    fact[0] = 1;
    for(ll i = 1 ; i<=8 ; i++)
    {
        fact[i] = fact[i-1]*i;
    }   
    map<char,ll>mp;
    string s;
    cin>>s;
    ll n = s.size();
    for(int i = 0 ; i<n ; i++)
    {
        mp[s[i]]++;
    }
    ll nstrings = (fact[n]);
    for(auto x : mp)
    {
        nstrings/=fact[x.second];
    }
    cout<<nstrings<<endl;
    sort(s.begin(),s.end());
    cout<<s<<endl;  
    string temp = next_perm(s);
    while(temp != s)
    {
        cout<<temp<<endl;
        temp = next_perm(temp);
    }


}

int main()
{
    solve();
}