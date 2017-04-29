#include<iostream>
using namespace std;
int main()
{
int n;
int count=0;
int sum=0;
cout<<"Enter the number";
cin>>n;
int temp=n;
while(n>0)
{
count++;
n=n/10;
}
cout<<"Number of Integers = "<<count<<endl;
for(int i=count;i>0;i--)
{
    if(i==count || i==1){
        sum=sum+(temp%10);}
        temp=temp/10;
}
cout<<"Answer = "<<sum;
}
