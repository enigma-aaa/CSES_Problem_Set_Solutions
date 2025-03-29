#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll start_idx = 0;
    ll ans = INT_MIN;
    set<ll>s;
    for(ll i = 0 ; i<n ; i++)
    {
        if(s.find(a[i]) == s.end())
        {
            s.insert(a[i]);
            ans = max(ans , (ll)s.size());
        }
        else 
        {
            while(a[start_idx] != a[i])
            {
                s.erase(a[start_idx]);
                start_idx++;
            }
            start_idx++;
            s.insert(a[i]);
            ans = max(ans , (ll)s.size());
        }
    }
    cout<<ans<<endl;

}