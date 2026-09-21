#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,count=0;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==0)
        {
            count++;
        }
    }
    if(count>=2)
    {
        if(v[0]==0&&v[n-1]==0)
        {
            cout<<"0\n";
        }
        else if((v[0]!=0 && v[n-1]==0) || (v[0]==0&&v[n-1]!=0))
        {
            cout<<"1\n";
        }
        else
        {
            cout<<"2\n";
        }
    }
    else
    {
        cout<<"-1\n";
    }
}
int main()
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