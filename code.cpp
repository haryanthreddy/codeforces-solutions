#include <iostream>
#include <algorithm>
using namespace std;
int main()
    {
        int t;
        cin>>t;
        while (t--)
        {
            int a,b,c ,ans =0;
            cin>>a>>b>>c;
            while(a!=b&&b!=c&&a!=c)
            {
                if (a>b&&a>c)
                {
                    a--;
                    if (b<c)b++;
                    else c++;
                }
                else if(b>a&&b>c)
                {
                    b--;
                    if(a<c)
                    a++;
                    else
                    c++;
                }
                else {
                    c--;
                    if(a<b)a++;
                    else b++;
                }
                ans++;
            }
            cout<<ans<<'\n';
        }
        return 0;
    }