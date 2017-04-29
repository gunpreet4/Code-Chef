#include <fstream>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
///********************
class optab
{
public:
    char mnemonic[10];
    char clas[5];
    char opcode[5];
    char n[5];
} obj;
///*********************
class symtab
{
public:
    char symbol[20];
    int address;
} sym[15];
///*********************
class littab
{
public:
    char literal[20];
    int add;
} lit[15];
///*********************
int lc=0;
char sym_order[15][15];///order of entry of symbols
int sym_top=-1;///for sym_order
int sym_entry=-1;///for symbol table
int lit_ptr=-1,pool_ptr=0;
char label_previous[50];
int pooltab[15];
char reg[4][10]= {"AREG","BREG","CREG","DREG"};
char cond[6][10]= {"LT","LE","EQ","GT","GE","ANY"};
char ftok[20];char str1[50];
fstream in;
fstream op;
fstream opt;
///*****************
void check_symbol();
void literal1();
int main()
{
    pooltab[0]=0;
    in.open("src2.txt",ios::in);
    op.open("inter.txt",ios::out);
    opt.open("optab.txt",ios::in);
    if(!opt)
    {
        cout<<"cannot open optable";
    }
    if(!op)
    {
        cout<<"cannot open intermediate code file";

    }
    if(!in)
    {
        cout<<"source file cannot be opened";
    }
    else
    {
        while(in)///reads instruction by instruction till the end of file
        {
            ftok[0]='\0';
            in>>ftok;
            if(ftok[0]!='\0')
            {
                if((stricmp(ftok,"start")==0))
                {
                    in>>lc;
                    cout<<"(AD,01)   (c,"<<lc<<")"<<"        "<<lc<<endl;
                    op<<"(AD,01)   (c,"<<lc<<")"<<"        "<<lc<<endl;
                }
                else if((stricmp(ftok,"ltorg")==0))
                {
                    cout<<"(AD,05)"<<endl;
                    op<<"(AD,05)"<<endl;
                    literal1();
                }
                else if((stricmp(ftok,"end")==0))
                {
                    cout<<"(AD,02)"<<endl;
                    op<<"(AD,02)"<<endl;
                    literal1();
                    break;
                }
                else if((stricmp(ftok,"equ")==0))
                {
                    cout<<"(AD,04)"<<endl;
                    op<<"(AD,04)"<<endl;
                    int addr;
                    in>>addr;
                    for(int i=0; i<=sym_entry; i++)
                    {
                        if((stricmp(sym[i].symbol,label_previous)==0))
                        {
                            sym[i].address=addr;
                        }
                    }
                }
                else if((stricmp(ftok,"stop")==0))
                {
                    cout<<"(IS,00)"<<"                  "<<lc<<endl;
                    op<<"(IS,00)"<<"                  "<<lc<<endl;
                    lc=lc+1;
                }
                else
                {
                    int flag=0;
                    opt.seekg(0,ios::end);
                    int total=opt.tellg();
                    int n=total/sizeof(obj);
                    opt.seekg(0,ios::beg);
                    for(int k=1; k<=n; k++)
                    {
                        opt.read((char *)&obj,sizeof(obj));
                        if((stricmp(obj.mnemonic,ftok)==0))
                        {
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1)
                    {
                        cout<<"("<<obj.clas<<","<<obj.opcode<<")"<<"   ";
                        op<<"("<<obj.clas<<","<<obj.opcode<<")"<<"   ";
                        if((stricmp(obj.clas,"IS")==0))
                        {
                            if((stricmp(obj.mnemonic,"READ")==0)||(stricmp(obj.mnemonic,"PRINT")==0))
                            {
                                in>>str1;///means one operand and that is symbol
                                check_symbol();///enter the symbol in symbol entry
                            }
                            else///two operands are there
                            {
                                in>>str1;
                                int len=strlen(str1);
                                str1[len-1]='\0';///remvoing ,
                                for(int h=0; h<4; h++)
                                {
                                    if((stricmp(reg[h],str1)==0))
                                    {
                                        cout<<"("<<h+1<<")";
                                        op<<"("<<h+1<<")";
                                    }
                                }
                                for(int a=0; a<6; a++)
                                {
                                    if((stricmp(cond[a],str1)==0))
                                    {
                                        cout<<"("<<a+1<<")";
                                        op<<"("<<a+1<<")";
                                    }
                                }
                                in>>str1;///fetching the second operand
                                if(str1[0]=='=')///literal is found
                                {
                                    lit_ptr++;
                                    strcpy(lit[lit_ptr].literal,str1);
                                    cout<<""<<"(L,0"<<lit_ptr+1<<")"<<"      "<<lc<<endl;
                                    op<<""<<"(L,0"<<lit_ptr+1<<")"<<"      "<<lc<<endl;
                                    lc=lc+1;
                                }
                                else if(str1[0]>=48&&str1[0]<=57)///constant is found
                                {
                                    cout<<"   "<<"(C,"<<str1<<")"<<"    "<<lc<<endl;
                                    op<<"   "<<"(C,"<<str1<<"    "<<lc<<endl;
                                    lc=lc+1;
                                }
                                else///it is a symbol
                                {
                                    check_symbol();
                                }
                            }
                        }
                        else if((stricmp(obj.clas,"DL")==0))
                        {
                            if((stricmp(obj.mnemonic,"DS")==0))
                            {
                                int size1;
                                in>>size1;
                                cout<<""<<"(C,"<<size1<<")"<<"          "<<lc<<endl;
                                op<<""<<"(C,"<<size1<<")"<<"          "<<lc<<endl;
                                lc=lc+size1;
                            }
                            else///means it is DC
                            {
                                int v=0;
                                char temp[15];
                                char value[15];
                                in>>temp;
                                for(int t=1; temp[t]!=39; t++)
                                {
                                    value[v++]=temp[t];
                                }
                                value[v]='\0';
                                cout<<""<<"(C,"<<value<<")"<<"           "<<lc<<endl;
                                op<<""<<"(C,"<<value<<")"<<"           "<<lc<<endl;
                                lc=lc+1;
                            }
                        }
                    }
                    else///token is first label (of instruction)
                    {
                        strcpy(label_previous,ftok);
                        sym_entry++;
                        strcpy(sym[sym_entry].symbol,ftok);
                        sym[sym_entry].address=lc;
                        ///if symbol already exists or not
                        if(sym_top==-1)
                        {
                            sym_top++;
                            strcpy(sym_order[sym_top],str1);
                        }
                        else
                        {
                            int flag;
                            flag=0;
                            for(int b=0; b<=sym_top; b++)
                            {
                                if((stricmp(sym_order[b],str1)==0))
                                {
                                    flag=1;
                                    break;
                                }
                            }
                            if(flag==0)
                            {

                                sym_top++;
                                strcpy(sym_order[sym_top],str1);
                            }
                        }
                    }
                }
            }
        }
    }
    in.close();
    op.close();
    opt.close();
    cout<<endl<<"symbol table"<<endl;
    fstream symf("symbol.txt",ios::out);
    if(!symf)
    {
        cout<<"file cannot be opened";
    }

    for(int p=0; p<=sym_entry; p++)
    {
        cout<<"****";
        cout<<setw(8)<<setiosflags(ios::left);
        cout<<sym[p].symbol<<sym[p].address<<"****"<<endl;
        symf<<"****";
        symf<<setw(8)<<setiosflags(ios::left)<<sym[p].symbol<<sym[p].address<<"****"<<endl;
    }
    cout<<endl<<"literal table"<<endl;
    for(int k=0; k<=lit_ptr; k++)
    {
        cout<<setw(12)<<setiosflags(ios::left);
        cout<<lit[k].literal<<lit[k].add<<endl;
    }

    symf.close();
    return 0;
}
void check_symbol()
{
    if(sym_top==-1)
    {
        ///first entry
        sym_top++;
        strcpy(sym_order[sym_top],str1);
        cout<<"(S,0"<<sym_top+1<<")"<<"         "<<lc<<endl;
        op<<"(S,0"<<sym_top+1<<")"<<"         "<<lc<<endl;
        lc++;
    }
    else
    {
        ///checking if entry already exists find it and print it
        int flag;
        flag=0;
        for(int h=0; h<=sym_top; h++)
        {
            if((stricmp(sym_order[h],str1)==0))
            {
                ///entry exists don't add it just print it
                cout<<"(S,0"<<h+1<<")"<<"      "<<lc<<endl;
                op<<""<<"(S,0"<<h+1<<")"<<"      "<<lc<<endl;
                lc++;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            ///if entry doesn't exits add it and print it
            sym_top++;
            strcpy(sym_order[sym_top],str1);
            cout<<"(S,0"<<sym_top+1<<")"<<"      "<<lc<<endl;
            op<<""<<"(S,0"<<sym_top+1<<")"<<"      "<<lc<<endl;
            lc++;
        }
    }
}
void literal1()
{
    for(int i=pooltab[pool_ptr]; i<=lit_ptr; i++)
    {
        lit[i].add=lc;
        cout<<lit[i].literal<<"      "<<"(L,0"<<i+1<<")         "<<lit[i].add<<endl;
        op<<lit[i].literal<<"      "<<"(L,0"<<i+1<<")         "<<lit[i].add<<endl;
        lc=lc+1;
    }
    pool_ptr=pool_ptr+1;
    pooltab[pool_ptr]=lit_ptr+1;
}
