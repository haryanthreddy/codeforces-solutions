#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    int count=0;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int m;
    cin>>m;
    vector <int> k(m);
    for (int i=0;i<m;i++)
    {
        cin>>k[i];
    }
    sort(v.begin(),v.end());
    sort(k.begin(),k.end());
    int i=0,j=0;
     while(i<n && j<m)
     {
        if(abs(v[i]-k[j])<=1)
        {
            count++;
            i++;
            j++;
        }
        else if (v[i] < k[j])
        {
            i++;
        }
        else{
            j++;
        }
     }
    cout<<count<<"\n";
    return 0;
}