#include <iostream>
using namespace std;
int main()
{
    int n;
    int h;
    cin>>n>>h;
    int width = 0;
    int x;
    for (int i=0;i<n;i++)
    {
        cin>>x;
        if (x >h)
        {
            width = width + 2;
        }
        else
        {
            width++;
        }
    }
    cout<<width;
    return 0;
}