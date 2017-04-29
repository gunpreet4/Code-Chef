#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m,min=1,area,square;
        cin>>n>>m;
        area=sqrt((n*m));
        for(int i=2;i<=(n*m);i++)
        {
            square=((n*m)/i);
            if(square<min)
                min=square;
        }
        cout<<min<<endl;
    }
    return 0;
}
