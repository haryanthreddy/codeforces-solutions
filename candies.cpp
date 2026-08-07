#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        cout<<(3-(n %3))%3<<"\n";
    }
    return 0;
}