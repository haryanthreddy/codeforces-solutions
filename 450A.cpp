#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    queue<pair<int,int>>q;
    for (int i=1;i<=n;i++)
    {
        int candies;
        cin>>candies;
        q.push({i,candies});
    }
    int last =0;
    while(!q.empty())
    {
        auto[id,candies]= q.front();
        q.pop();
        candies-= m;
        if (candies>0)
        {
            q.push({id,candies});
        }
        else
        {
            last =id;
        }
    }
    cout<<last<<"\n";
    return 0;
}