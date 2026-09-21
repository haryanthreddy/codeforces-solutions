#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    string s;
    cin>>n>>s;
    for(int i=0;2*i<n;i++)
    {
        for(int j=1;j<size(s);j++)
        {
            if(s[j]==s[j-1])
            {
                s.erase(j-1,2);
            }
        }
    }
    if(s.empty())
    {
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}