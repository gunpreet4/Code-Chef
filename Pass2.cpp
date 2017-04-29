#include<fstream>
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
///*************optable class
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
int ptr1=0,ptr2=-1;
int sym_entry=-1;
int lit_ptr=-1;
int pool_ptr=0;
char reg[4][10]= {"AREG","BREG","CREG","DREG"};
char cond[6][10]= {"LT","LE","EQ","GT","GE","ANY"};
///****************
char ftok[20];
char str1[50];
ifstream in;
ofstream op;
ifstream sf;
ifstream lf;
///*****************
void symbol()///fetching symbol table
{
    sf.open("symbol.txt",ios::in);
    while(sf)
    {
	sym_entry++;
	sf>>sym[sym_entry].symbol;
	sf>>sym[sym_entry].address;
	if(!sf)
	{
	    break;
	}
    }
    --sym_entry;
    sf.close();
}
void literal()///fetching literal table
{
    lf.open("literal.txt",ios::in);
    while(lf)
    {
	lit_ptr++;
	lf>>lit[lit_ptr].literal;
	lf>>lit[lit_ptr].add;
	if(!lf)
	{
	    break;
	}
    }
    lit_ptr--;
    lf.close();
}
void literal1()
{
    cout<<endl;
    op<<endl;
    for(int g=ptr1; g<=ptr2; g++)
    {
	int i=2,j=0;
	char temp[10];
	cout<<lc<<")  "<<"+00    0  ";
	op<<lc<<")  "<<"+00    0  ";
	while(lit[g].literal[i]!=39)///separting literal
	{
	    temp[j++]=lit[g].literal[i++];
	}
	temp[j]='\0';
	cout<<"00"<<temp<<endl;
	op<<temp<<endl;
	lc=lc+1;
    }
    ptr1=ptr2+1;

}
int main()
{
    symbol();
    literal();
    in.open("src2.txt",ios::in);
    op.open("target.txt",ios::out);
    ifstream opt("optab.txt",ios::in);
    if(!opt)
    {
	cout<<"optable file cannot be opened";
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
		if((stricmp(ftok,"start")==0))///and comparing it for start etc
                {
                    in>>lc;
                }
                else if((stricmp(ftok,"ltorg")==0))
                {
                    cout<<"ltorg";
                    literal1();
                }
                else if((stricmp(ftok,"end")==0))
                {
                    cout<<"end";
                    literal1();
                    break;
                }
                else if((stricmp(ftok,"equ")==0))
                {
                    int addr;
                    in>>addr;
                    cout<<"equ"<<endl;
                    op<<endl;
                }
                else if((stricmp(ftok,"stop")==0))
                {
                    cout<<lc<<")  ";
                    cout<<"+00    0  000"<<endl;
                    op<<lc<<")  +00    0  000"<<endl;
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
                        if((stricmp(obj.clas,"IS")==0))
                        {
                            cout<<lc<<")  ";
                            cout<<"+"<<obj.opcode<<"    ";
                            op<<lc<<")  +"<<obj.opcode<<"    ";
                            if((stricmp(obj.mnemonic,"READ")==0)||(stricmp(obj.mnemonic,"PRINT")==0))
                            {
                                in>>str1;///means one operand and that is symbol
                                for(int q=0; q<=sym_entry; q++)
                                {
                                    if((stricmp(sym[sym_entry].symbol,str1)==0))
                                    {
                                        cout<<"0  "<<sym[sym_entry].address<<endl;
                                        op<<"0  "<<sym[sym_entry].address<<endl;
                                    }
                                }
                                lc=lc+1;
                            }
                            else///two operands are there
                            {
                                in>>str1;
                                int len=strlen(str1);
                                str1[len-1]='\0';///removing , from the first operand
                                for(int h=0; h<4; h++)
                                {
                                    if((stricmp(reg[h],str1)==0))
                                    {
                                        cout<<h+1<<"  ";
                                        op<<h+1<<"  ";
                                    }
                                }
				for(int e=0; e<6; e++)
				{
				    if((stricmp(cond[e],str1)==0))
				    {
					cout<<e+1<<"  ";
					op<<e+1<<"  ";
                                    }
                                }
                                in>>str1;///fetching the second operand
                                if(str1[0]=='=')///literal is found
                                {
                                    ptr2++;
				    cout<<lit[ptr2].add<<endl;
                                    op<<lit[ptr2].add<<endl;
                                    lc=lc+1;
                                }
                                else if(str1[0]>=48&&str1[0]<=57)///constant is found
				{
				    cout<<str1<<endl;
				    op<<str1<<endl;
				    lc=lc+1;
                                }
                                else///it is a symbol
                                {
                                    for(int q=0; q<=sym_entry; q++)
                                    {
                                        if((stricmp(sym[q].symbol,str1)==0))
                                        {
                                            cout<<sym[q].address<<endl;
                                            op<<sym[q].address<<endl;
                                        }
                                    }
                                    lc=lc+1;///same as having a single operand
                                }
                            }
                        }
                        else if((stricmp(obj.clas,"DL")==0))
                        {
                            if((stricmp(obj.mnemonic,"DS")==0))
                            {
                                cout<<lc<<")"<<endl;
                                op<<lc<<")"<<endl;
                                int size1;
                                in>>size1;
                                lc=lc+size1;
                            }
                            else///means it is DC
                            {
                                cout<<lc<<")"<<endl;
                                op<<lc<<")"<<endl;
                                int value;
                                in>>value;
                                lc=lc+1;
                            }
                        }
                    }
                    else///first label
                    {

                    }
                }
            }
        }
    }
    in.close();
    op.close();
    opt.close();
    return 0;
}


