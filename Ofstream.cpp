#include<iostream>
#include<conio.h>
#include<process.h>
#include<fstream>
int main()
{
    char name[15];
    int roll_no;
    ofstream out("sample.txt");
    if(!out)
    {
        cout<<"Cannot open the file";
        exit(-1);
    }
    cout<<"Enter Name";
    cin>>name;
    out<<name;
    cout<<"Enter RollNo"
    cin>>roll_no;
    out<<roll_no;
    out.close();
}
