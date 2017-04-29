#include<iostream>
using namespace std;
int main()
{
    int t,n,a=0,b;
    cin>>t;



    for(int i=0;i<t;i++)
    {
        cin>>n;
        while(n>0)
        {
            a=a*10;
            b=n%10;
            a=a+b;
            n=n/10;
        }
        cout<<a<<"\n";
        a=0;
    }
  return 0;
}
