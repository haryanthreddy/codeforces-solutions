#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long range;
    long long a,b,c;
    cin>>n;
    while (n--)
    {
        cin>>a>>b>>c;
        long long t,s;
        t = max({a,b,c});
        s = min({a,b,c});
        if(t > ((a+b+c)-t))
        {
            t = ((a+b+c)-t);
            range = t-s;
        }
        else
        {
            range = t-s;
        }
        cout<<range<<endl;
    }
    return 0;

}