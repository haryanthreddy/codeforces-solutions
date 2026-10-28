#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,t;
    cin>>s;
    for(int k =0;k<s.length();k++)
    {
        char c = tolower(s[k]);
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
        {
            t += '.';
            t += c;
        }
    }
    cout<<t<<"\n";
    return 0;
}