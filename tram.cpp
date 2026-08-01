#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int current =0;
    int maximum =0;
    for (int i =0;i<n;i++)
    {
        int exit,enter;
        cin>>exit>>enter;
        current = current -exit;
        current = current +enter;
        if (current>maximum)
        {
            maximum = current;
        }
    }
    cout<<maximum;
    return 0;
}