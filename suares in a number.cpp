#include<iostream>
using namespace std;
int main()
{
    int t,n,product,p;
    cin>>t;
    while(t--)
    {
        product=1,p=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            product=product*arr[i];
        }
        for(int j=2;j<product;j++)
        {
            p=(j*j);
            if(product%p==0)
            {
                cout<<j<<endl;
                break;
            }
        }
    }
    return 0;
}
