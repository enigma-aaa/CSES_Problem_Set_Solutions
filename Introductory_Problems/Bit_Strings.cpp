#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;

// can also do fast exponentiation, but not needed here

void solve()
{
    ll n;
    cin>>n;
    ll ans = 1;
    while(n)
    {
        ans = ans*2 ;
        ans = ans%mod;
        n--;
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
}