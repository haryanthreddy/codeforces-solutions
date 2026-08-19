#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n;
    cin >>n;
    long long x = sqrt(n);
    if (x * x ==n)
    {
        cout<<2*x<<'\n';
    }
    else if (x*(x+1) >=n)
    {
        cout<<2*x +1<<'\n';
    }
    else{
        cout<<2*x + 2<<'\n';
    }
    return 0;
}