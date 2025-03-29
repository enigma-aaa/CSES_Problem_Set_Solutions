#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    vector<ll>ans(n+1,INT_MAX);
    vector<ll>p10(7);
    ans[0] = 0;
    for(ll i = 1LL ; i<=min(n,9LL) ; i++ )
    {
        ans[i] = 1;
    }
    p10[0] = 1;
    for(ll i = 1 ; i<=6 ; i++)
    {
        p10[i] = p10[i-1] * 10;
    }
    for(ll i = 10 ; i<=n ; i++)
    {
        for(auto x : p10)
        {
            ll dig = (i/x)%10;
            ans[i] = min(ans[i] , ans[i-dig] + 1);
        }   
    }
    cout<<ans[n]<<endl;
}