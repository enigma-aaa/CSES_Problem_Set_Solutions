#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll n;
    cin>>n;
    while(true)
    {
        cout<<n<<" ";
        if(n==1)
        {
            break;
        }
        else if(n%2 == 0)
        {
            n = n/2;
        }
        else 
        {
            n = 3*n+1;
        }
    }
}

int main()
{
    solve();
}
