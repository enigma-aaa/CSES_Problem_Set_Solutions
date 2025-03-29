#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>c(n);
    for(ll i = 0 ; i<n ; i++)
    {
        ll a,b;
        cin>>a>>b;
        c[i] = {b,a};
    }
    sort(c.begin(), c.end());
    ll ans = 0;
    ll i = 0;

    while(i<n)
    {
        ans++;
        ll deadline = c[i].first;
        i++;
        while(i<n && (c[i].second < deadline))
        {
            i++;
        }
        while((i+1<n) && (c[i].second == c[i+1].second))
        {
            i++;
        }
    }
    cout<<ans<<endl;
}