#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int x=n-1900;
        for(int j=1904;j<n;j++)
        {
          if(((j%4==0)&&j%100!=0)||(j%400==0))
            {
                x++;
            }
        }
        x=(x+1)%7;
        switch(x){
        case 0:{cout<<"sunday"<<"\n";break;}
        case 1:{cout<<"monday"<<"\n";break;}
        case 2:{cout<<"tuesday"<<"\n";break;}
        case 3:{cout<<"wednesday"<<"\n";break;}
        case 4:{cout<<"thursday"<<"\n";break;}
        case 5:{cout<<"friday"<<"\n";break;}
        case 6:{cout<<"saturday"<<"\n";break;}
    }
    }
}
