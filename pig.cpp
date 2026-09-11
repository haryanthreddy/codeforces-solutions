#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(2*k>n)
        {
            cout<<"-1\n";
            continue;
        }
        int ans =0;
        for(int i=0;i<k;i++)
        {
            if (s[i]=='L')
            {
                ans++;
            }
        }
        for(int j=n-k;j<n;j++)
        {
            if(s[j]=='R')
            {
            ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}