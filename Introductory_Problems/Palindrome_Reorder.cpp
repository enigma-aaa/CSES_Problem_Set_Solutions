#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    string s;
    cin>>s;
    map<char,int>m;
    for(auto c : s)
    {
        m[c]++;
    }
    string first = "";
    string second = "";
    for(auto x : m)
    {
        char c = x.first;
        ll count = x.second;
        for(int i = 0 ; i<count/2 ; i++)
        {
            first.push_back(c);
            second.push_back(c);
        }
        m[c] = m[c] - 2*(count/2);
    }
    char left_char = ' ';
    ll left_count = 0;
    for(auto x : m)
    {
        left_count += x.second;
        if(x.second>0)
        {
            left_char = x.first;
        }
    }
    if(left_count>1)
    {
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    if(left_count == 1)
    {
        first.push_back(left_char);
    }

    for(auto c : first)
    {
        cout<<c;
    }
    for(int i = second.size()-1 ;i>=0 ; i--)
    {
        cout<<second[i];
    }
    cout<<endl;
}

int main()
{
    solve();
}