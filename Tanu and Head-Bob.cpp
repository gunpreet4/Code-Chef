#include<iostream>
using namespace std;
int main()
{
    int t,n,I,y,N;
    cin>>t;
    while(t--)
    {
        cin>>n;
    char a[n];
        I=y=N=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]=='I'){
                I++;}
            if(a[i]=='Y'){
            y++;}
            if(a[i]=='N'){
            N++;}
        }
        if(y>0)
            cout<<"NOT INDIAN"<<endl;
        if(y==0 && I==0)
            cout<<"NOT SURE"<<endl;
        if(I>0)
            cout<<"INDIAN"<<endl;
    }
    return 0;
}
