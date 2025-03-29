#include <bits/stdc++.h>
using namespace std; 
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }

    multiset<ll>s ;
    for(auto x : a)
    {
        s.insert(x);
    }

    while(k--)
    {
        ll y;
        cin>>y;
        auto it = s.upper_bound(y);
        if(it == s.begin())
        {
            cout<<-1<<endl;
        }
        else
        {
            it--;
            cout<<*it<<endl;
            s.erase(it);
        }
    }
}