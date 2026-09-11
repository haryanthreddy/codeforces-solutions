#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector <long long> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long  sum=0;
    bool possible =true;;
    for(int i=0;i<n;i++)
    {
        sum +=a[i];
        long long length= i+1;
        long long min_sum= (1LL*length*(length+1))/2;
        if(sum<min_sum)
        {
            possible=false;
            break;
        }
    }
    if(possible)
    {
        cout<<"yes\n";
    }
    else
    {
        cout<<"no\n";
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
