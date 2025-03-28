#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i = 0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    vector<ll>sums;
    sums.push_back(0LL);
    for(int i = 0 ;i<n ; i++)
    {
        int cur_size = sums.size();
        for(int j = 0 ; j<cur_size ; j++)
        {
            sums.push_back(sums[j] + a[i]);
        }
    }
    ll ans = INT_MAX;
    ll total_sum = accumulate(a.begin(),a.end(),0LL);
    for(auto x : sums)
    {
        ans = min(ans,abs(total_sum - 2*x));
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
}