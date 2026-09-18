#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    auto last = unique(v.begin(),v.end());
    v.erase(last,v.end());
    cout<<v.size()<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}