#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    long int p;
    for(long int i=0;i<t;i++)
    {
        p=0;
        long int count0=-1,count1=0,m;
        cin>>m;
        bool a[m];
        for(long int j=0;j<m;j++)
        {
            cin>>a[j];
        }
       for(long int k=0;k<m;k++)
       {
       	if(a[k]==0)
       	{
       		count0=k;
       		break;
		   }
	   }
       for(long int l=0;l<m;l++)
       {
           if(a[l]==0)
            count1++;
       }
       long int sum=count1*1000;
        if(count0>=0)
        {
            p=(m-1)-count0+1;
            p=p*100;
        }
        else
            p=0;
            long int ans=sum+p;
        cout<<ans<<endl;
    }
    return 0;
}

