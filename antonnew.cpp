#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> a(n);
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    set <int>seen;
    vector <int> ans;
    for(int i=n-1;i>=0;i--)
    {
        if(seen.find(a[i])==seen.end())
       {
         ans.push_back(a[i]);
        seen.insert(a[i]);
       }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<'\n';

    for(int x:ans)
    {
        cout<<x<<" "<<'\n';
    }
    return 0;
}