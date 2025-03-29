#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i =0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    sort(a.begin() , a.end());
    ll cur_reach = 0;
    for(ll i = 0 ;i<n ; i++)
    {
        if(cur_reach + 1 < a[i])
        {
            break;
        }
        cur_reach += a[i];
    }
    cout<<cur_reach+1<<endl;
}