#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> v(n);
    int total = 0;
    int sum = 0,count=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        total += v[i];
    }
    sort(v.rbegin(),v.rend());
    for(int x : v)
    {
        sum += x;
        count++;
    
    if(sum > (total-sum))
    {
        break;
    }
}
    cout <<count <<endl;
    return 0;
}