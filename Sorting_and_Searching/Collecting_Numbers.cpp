#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>a;
    for(ll i =0 ; i<n ; i++)
    {
        ll x;
        cin>>x;
        a.push_back({x,i});
    }
    sort(a.begin() , a.end());
    ll ans = 1;
    for(int i = 1 ; i<n ; i++)
    {
        if(a[i].second<a[i-1].second)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}