#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
void reverse(char c[],int n)
{
    stack<char> s;
    for(int i=0;i<n;i++) //For Push
    {
        s.push(c[i]);
    }
    for(int i=0;i<n;i++) //For Pop
    {
        c[i]=s.top();
        s.pop();
    }
}
int main()
{
    char c[20];
    int p;
    cout<<"Enter the length of String";
    cin>>p;
    cout<<"Enter the String";
    for(int i=0;i<p;i++)
        cin>>c[i];
    reverse(c,p);
    cout<<"Output : "<<c;
    return 0;
}
