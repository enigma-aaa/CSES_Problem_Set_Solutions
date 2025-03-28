#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll a,b;
    cin>>a>>b;
    ll x = (2*a -b) %3 ;
    ll y = (2*b -a)%3;
    ll p = (2*a -b)/3 ;
    ll q = (2*b -a)/3;

    if((x==0) && (y==0) &&(p>=0) && (q>=0))
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}