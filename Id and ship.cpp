#include<iostream>
using namespace std;
int main()
{
    int t;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>c;
        if(c=='b'||c=='B')
            cout<<"BattleShip"<<endl;
         if(c=='c'||c=='C')
            cout<<"Cruiser"<<endl;
        if(c=='d'||c=='D')
            cout<<"Destroyer"<<endl;
        if(c=='F'||c=='f')
            cout<<"Frigate"<<endl;
    }
    return 0;
}
