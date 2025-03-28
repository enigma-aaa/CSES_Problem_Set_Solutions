#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n-1);
    for(int i = 0 ; i<n-1 ; i++) {cin>>a[i];}
    sort(a.begin(),a.end());
    ll last_element = 0;
    for(int i = 0 ; i<n-1 ; i++)
    {
        if(a[i] != (last_element + 1))
        {
            cout<<last_element+1;
            return; 
        }
        else {
            last_element = a[i];
        }
    }
    cout<<last_element+1<<endl;
}

int main()
{
    solve();
}