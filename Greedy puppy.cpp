#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
     long int n,k,p;
    cin>>t;
    while(t--){

        cin>>n>>k;

        int a[k];
        p=k;
        for(int i=0;i<k;i++)
        {

            a[i]=n%p;

            p--;
        }
       sort(a,a+k);
    cout<<a[k-1]<<endl;
    }
    return 0;
}
