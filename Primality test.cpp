#include<iostream>
using namespace std;
int prime(int);
int main()
{
    int t,n,flag=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        flag=prime(n);
        if(flag==1)
        {
            cout<<"no"<<"\n";
        }
        else
        {
            cout<<"yes"<<"\n";
        }

    }
    return 0;
}
int prime(int a)
{ int c;
    for(c=2;c<a;c++)
    {
        if(a%c==0)
            return 1;}
        if(c==a)
            return 0;

}
