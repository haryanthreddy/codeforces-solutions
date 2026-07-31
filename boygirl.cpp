#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int num = 0;
    for (int i=0;i<=s.length();i++)
    {
        if (s.find(s[i]) ==i )
        {
            num++;
        }
    }
    if (num % 2 == 1)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
    return 0;
}