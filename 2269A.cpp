#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k =0;
        cin>>n>>k;
        cout<< (1LL<<(n-k+1)) + 2*(k-1)<<"\n";
    }  
    return 0;
}