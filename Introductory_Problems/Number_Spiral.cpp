#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll x,y;
    cin>>y>>x;
    ll layer_num = max(y,x);
    ll mid_num = 1 + (layer_num - 1) * layer_num ;
    if(layer_num % 2 == 0)
    {
        if(layer_num == y)
        {
            cout<<mid_num + (layer_num - x) << endl;
        }
        else 
        {
            cout<<mid_num - (layer_num - y) << endl;
        }
    }
    else 
    {
        if(layer_num == y)
        {
            cout<<mid_num - (layer_num - x) << endl;
        }
        else 
        {
            cout<<mid_num + (layer_num - y) << endl;
        }
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