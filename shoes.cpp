#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int freq[1000000000] = {0};
    freq[a]++;
    freq[b]++;
    freq[c]++;
    freq[d]++;
    int distinct =0;
    for (int i=0;i<=1000000000;i++)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
    {
        if (freq[i]> 0)
        {
            distinct++;
        }
    }
    cout<< 4 - distinct;
    return 0;
}