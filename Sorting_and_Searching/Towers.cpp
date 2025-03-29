#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    multiset<ll>s;
    for(ll i = 0 ; i<n ; i++)
    {
        ll x;
        cin>>x;
        if(s.empty())
        {
            s.insert(x);
        }
        else 
        {
            auto it = s.upper_bound(x);
            if(it == s.end())
            {
                s.insert(x);
            }
            else 
            {
                s.erase(it);
                s.insert(x);
            }

        }
    }
    cout<<s.size()<<endl;
}