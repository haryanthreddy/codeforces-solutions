#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>> n;
    int amount =0;
    int coin100 =0;
    int coin10=0;
    int coin1=0;
    for(int i=0;i<n;i++)
    {
        cin>>amount;
        int bills = (amount + 999)/1000;
        amount = bills*1000 - amount;
     coin100 += amount/100;
     amount = amount%100;
     coin10 += amount/10;
    amount = amount%10;
     coin1 += amount;
    }
    cout<<coin100 << " "<<coin10<<" "<<coin1<<'\n';
    return 0;
}