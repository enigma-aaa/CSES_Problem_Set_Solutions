#include <bits/stdc++.h>
using namespace std;
#define ll long long 

vector<pair<ll,ll>> steps(ll n , ll a, ll b, ll c)
{
    // Transfers n disks from a to c using b
    vector<pair<ll,ll>>ans;
    if(n==1)
    {
        ans.push_back({a,c});
        return ans;
    }
    vector<pair<ll,ll>>ans1 = steps(n-1,a,c,b);
    vector<pair<ll,ll>>ans2 = {{a,c}};
    vector<pair<ll,ll>>ans3 = steps(n-1,b,a,c);
    for(auto x : ans1)
    {
        ans.push_back(x);
    }
    for(auto x : ans2)
    {
        ans.push_back(x);
    }
    for(auto x : ans3)
    {
        ans.push_back(x);
    }
    return ans;
}

int main()
{
    ll n;
    cin>>n;
    cout<<(1LL<<n)-1<<endl;
    vector<pair<ll,ll>>v = steps(n,1,2,3);
    for(auto x : v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}   