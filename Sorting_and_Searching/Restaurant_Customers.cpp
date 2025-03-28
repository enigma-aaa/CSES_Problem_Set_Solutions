#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    map<ll,ll>m;
    for(int i = 0 ; i<n ; i++)
    {
        ll x,y;
        cin>>x>>y;
        m[x]++;
        m[y+1]--;
    }

    ll ans = 0;
    ll current_count = 0;
    for(auto x : m)
    {
        current_count+=x.second;
        ans = max(ans,current_count);
    }

    cout<<ans<<endl;
}