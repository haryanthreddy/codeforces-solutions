#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int sides=0;
    for (int i=0;i<n;i++)
    {
        cin>>s;
        if(s =="Tetrahedron")
        {
            sides +=4;
        }
        else if (s =="Cube")
        {
            sides +=6;
        }
        else if (s== "Octahedron")
        {
            sides +=8;
        }
        else if(s=="Dodecahedron")
        {
            sides +=12;
        }
        else if (s =="Icosahedron")
        {
            sides += 20;
        }
    }
    cout<<sides;
     return 0;
}