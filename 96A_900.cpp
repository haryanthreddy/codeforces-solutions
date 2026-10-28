#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int count =0,t=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            t =0;
            count++;
        }
        else if(s[i]=='1')
        {
            count =0;
            t++;
        }
        if(count >=7 || t>=7)
        {
            cout <<"YES\n";
            return 0;
        }
    }
            cout <<"NO\n";
        
        return 0;
}