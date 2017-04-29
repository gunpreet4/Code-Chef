#include<iostream>
#include<ratio>
using namespace std;
int main()
{
 int t,i,a[1000];
 cin>>t;
 for(int j=0;j<t;j++)
 {
  cin>>i;
  int k;
  while(i>0)
  {
  for( k=0;k<i;k++)
  {
     cin>>a[k];
  }
   for(int l=0;l<k;l++)
   {
       ratio<a[l],a[l+1]>;
  }
 i--;
 }
 }
 return 0;
}
