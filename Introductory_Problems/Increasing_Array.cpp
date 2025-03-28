#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll ans = 0 ;
    ll last_ele = 0;
    ll n;
    cin >> n;
    vector<ll>a(n);
    for(int i = 0 ; i<n ; i++){cin>>a[i];}
    for(int i = 0 ; i<n ; i++)
    {
        if(a[i]>=last_ele)
        {
            last_ele = a[i];
        }
        else 
        {
            ans += last_ele - a[i];
        }
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
}