#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll n ;
    cin>>n;
    if((n%4 == 0) || ((n+1)%4 == 0))
    {
        cout<<"YES"<<endl;
        if(n%2 == 0)
        {
            cout<<n/2<<endl;
            for(int i = 0 ; i<n/4 ; i++)
            {
                cout<<i+1<<" "<<n-i<<" ";
            }
            cout<<endl;
            cout<<n/2<<endl;
            for(int i = n/4 ; i<n/2 ; i++)
            {
                cout<<i+1<<" "<<n-i<<" ";
            }
            cout<<endl;
        }
        else 
        {
            cout<<(n+1)/2<<endl;
            cout<<1<<" "<<2<<" ";
            for(int i = 0 ; i<(n-3)/4 ; i++)
            {
                cout<<3 + i+1<<" "<<n-i<<" ";
            }
            cout<<endl;
            cout<<n/2<<endl;
            cout<<3<<" ";
            for(int i = (n-3)/4 ; i<(n-3)/2 ; i++)
            {
                cout<<3+i+1<<" "<<n-i<<" ";
            }
            cout<<endl;
        }
    }
    else 
    {
        cout<<"NO"<<endl;
    }
}

int main()
{
    solve();
}   