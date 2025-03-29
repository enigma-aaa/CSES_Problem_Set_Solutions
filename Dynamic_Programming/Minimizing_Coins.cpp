#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<ll>ans(k+1,INT_MAX);
    ans[0] = 0;
    for(ll i = 1 ; i<=k ; i++)
    {
        for(ll j = 0 ; j<n ; j++)
        {
            if((i-a[j])>=0 && (ans[i-a[j]] != INT_MAX))
            {
                ans[i] = min(ans[i], ans[i-a[j]]+1);
            }
        }
    }
    if(ans[k] == INT_MAX)
    {
        cout<<-1<<endl;
    }
    else 
    {
        cout<<ans[k]<<endl;
    }
}