#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> a,b,c;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        a.push_back(i);
        else if (x==2)
        b.push_back(i);
        else
        c.push_back(i);
    }
    int teams = min({a.size(),b.size(),c.size()});
    cout<<teams<<endl;
    for(int j = 0;j<teams;j++)
    {
        cout<<a[j]<<" "<<b[j]<<" "<<c[j]<<endl;
    }
    return 0;
}