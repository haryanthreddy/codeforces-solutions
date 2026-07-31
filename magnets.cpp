#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,prev;
    cin>>prev;
    int length =1;
    for (int i=1;i<n;i++)
    {
        cin>>s;
        if (s!= prev)
        {
            length++;
        }
        prev = s;
    }
    cout<<length;
    return 0;
}