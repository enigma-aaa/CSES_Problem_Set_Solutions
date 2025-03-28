#include<bits/stdc++.h>
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
    bool allNegative = true;
    for(ll i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            allNegative = false;
            break;
        }
    }
    if(allNegative)
    {
        cout<<*max_element(a.begin(),a.end())<<endl;
        return 0;
    }

    ll ans = INT_MIN;
    ll sum = 0;
    for(ll i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum<0)
        {
            sum = 0;
        }
        ans = max(ans,sum);
    }
    cout<<ans<<endl;
}