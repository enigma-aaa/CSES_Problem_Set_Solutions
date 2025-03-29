#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;

int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<ll>ans(x+1,0);
    ans[0] = 1;
    for(ll i = 1 ; i<=x ; i++)
    {
        for(auto y : a)
        {
            if(i-y>=0)
            {
                ans[i] += ans[i-y];
                ans[i] %= mod;
            }
        }
    }
    cout<<ans[x]<<endl;
}