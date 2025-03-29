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
    sort(a.begin(), a.end());
    ll sum = accumulate(a.begin(), a.end(), 0LL);
    ll ans = LLONG_MAX;
    ll cur_sum = 0;
    for(ll i = 0 ; i<n ; i++)
    {
        ll cur_ans =  - cur_sum;
        cur_ans += (sum - cur_sum - a[i]);
        cur_ans += (i - (n-i-1LL)) * a[i];

        ans = min(ans, cur_ans);
        cur_sum += a[i];
    }
    cout<<ans<<endl;

}