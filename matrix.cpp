#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    int b;
    int x;
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>x;
            if (x==1)
            {
                a = i;
                b = j;
            }
        }
    }
    cout<< abs(a -2) + abs (b - 2);
    return 0;
}