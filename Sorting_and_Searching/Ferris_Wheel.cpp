#include<bits/stdc++.h>
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
    sort(a.begin(),a.end());
    ll ans = 0 ;
    ll i = 0;
    ll j = n-1;
    while(i<=j)
    {
        if(a[i]+a[j]<=k)
        {
            ans++;
            i++;
            j--;
            continue;
        }
        ans++;
        j--;
    }
    cout<<ans<<endl;
}