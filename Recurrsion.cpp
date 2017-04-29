#include<iostream>
using namespace std;
void printnum(int);
int main()
{
    int a=1;
    printnum(a);
    return 0;
}
void printnum(int a)
{
    cout<<a<<endl;
    a=a+1;
    if(a==101)
        return;
    else
        printnum(a);
}
