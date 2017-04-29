#include<iostream>
using namespace std;
int main()
{
    int t,o=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        o=0;
        while(a!=b)
        {
        if(a>b)
        {
           a=a/2;
           o++;
        }

            else
            {
                b=b/2;
                o++;
            }
        }

        cout<<o<<endl;
    }
}
