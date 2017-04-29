#include<iostream>
using namespace std;
int main()
{
    int t,bs;
    float hra,da,gs;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>bs;
        if(bs<1500)
        {
            hra=0.10*bs;
            da=0.90*bs;
            gs=bs+hra+da;
        }
        else
        {
            hra=500;
            da=0.98*bs;
            gs=bs+hra+da;
        }
        cout<<gs<<"\n";
    }
    return 0;
}
