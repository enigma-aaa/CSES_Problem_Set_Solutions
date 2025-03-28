#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    {
        if(mp.find(x-a[i])!=mp.end())
        {
            cout<<mp[x-a[i]]+1<<" "<<i+1<<endl;
            return 0;
        }
        mp[a[i]] = i;
    }
    cout<<"IMPOSSIBLE"<<endl;
}