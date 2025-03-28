#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<string>ans = {"0","1"};
    vector<string>aux1;
    vector<string>aux2;
    for(int i = 2 ; i<=n ; i++)
    {
        for(string x : ans)
        {
            x.push_back('0');
            aux1.push_back(x);
            x[x.size()-1] = '1';
            aux2.push_back(x);
        }
        reverse(aux2.begin(),aux2.end());
        ans.clear();
        for(auto x : aux1)
        {
            ans.push_back(x);
        }
        for(auto x : aux2)
        {
            ans.push_back(x);
        }
        aux1.clear();
        aux2.clear();
        
    }
    for(auto x : ans)
    {
        cout<<x<<endl;
    }
}