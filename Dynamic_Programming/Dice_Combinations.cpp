#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
int main()
{
    ll n;
    cin>>n;
    vector<ll>a(n+1);
    a[0] = 1;
    for(ll i = 1 ; i<=n ; i++)
    {
        for(ll j = 1 ; (j<=6) && ((i-j)>=0) ; j++)
        {
            a[i] += a[i-j];
            a[i] %= mod;
        }
    }
    cout<<a[n]<<endl;
}