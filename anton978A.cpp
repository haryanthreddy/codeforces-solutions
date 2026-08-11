#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> ans;
    set <int> seen;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        if (seen.find(x)==seen.end())
        {
            ans.push_back(x);
            seen.insert(x);
        }
    }
    cout<<ans.size()<<'\n';
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    cout<< '\n';
    return 0;
}