#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll n;
    cin>>n;
    if(n==2 ||  n == 3)
    {
        cout<<"NO SOLUTION";
        return;
    }
    for(int i = 2 ; i<=n ; i+=2)
    {
        cout<<i<<" ";
    }
    for(int i = 1 ; i<=n ; i+=2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    solve();
}