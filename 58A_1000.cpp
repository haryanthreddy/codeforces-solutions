#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    string target ="hello";
    int pas =0;
    for(char c : s)
    {
        if(c == target[pas])
        {
            pas++;
        }
        if(pas == 5)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
