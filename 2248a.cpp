#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int zero = s.find('0');
        int one = s.find('1');
        s.erase(zero,1);
        if(one > zero)
        {
            one--;
        }
        s.erase(one,1);
        cout<<s<<'\n';
    }
    return 0;
}