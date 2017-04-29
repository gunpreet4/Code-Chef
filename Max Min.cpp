#include<iostream>
using namespace std;

void del(int p)
        {
            for(int l=p;l<(sizeof(a)-1);l++)
            {
                a[p]=a[p+1];
            }
        }
int main()
{
    int t,n;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        cin>>n;
     static   int a[n];
        int c=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int j=0;j<=sizeof(a);j++)
        {
            if(a[j]>a[j+1])
            {c=c+a[j+1];
             del(j);

            }
            else if(a[j]<a[j+1])
            {c=c+a[j];
            del(j+1);

            }
            else{
                c=c+a[j];
                del(j);}

        }
        cout<<c<<"\n";
    }
    return 0;
}
