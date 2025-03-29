#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll n,k;
    cin>>n>>k;
    map<ll,ll>m;
    m[0]=1;
    ll ans = 0;
    ll cur_sum = 0 ;
    for(ll i = 0 ; i<n ; i++)
    {
        ll x;
        cin>>x;
        cur_sum += x;
        ans += m[cur_sum-k];
        m[cur_sum]++;
    }
    cout<<ans<<endl;
}