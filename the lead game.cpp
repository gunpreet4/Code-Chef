#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long int arr1=0,arr2=0,a=0,b=0,l=0,p=0,q=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr1>>arr2;
        a+=arr1;
        b+=arr2;
        if(a>b)
        {
            l=a-b;
            if(l>q)
            {
                q=l;
                p=1;
            }

        }
        if(a<b){
            l=b-a;
             if(l>q)
            {
                q=l;
                p=2;
            }

        }
    }
    cout<<p<<" "<<q;
    return 0;
}
