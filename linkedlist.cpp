#include<iostream>
using namespace std;
typedef struct celltype* position;
typedef int elementtype;
struct celltype
{
    elementtype value;
    position next;
};
class list{
private:
    position listhead;
public:
    void null();
    void insertlist(elementtype x,position p);
    void deletelist(position p);
    position first();
    position endele();
    position next(position p);
    void print();
    };
    void list::null(){
    listhead=new celltype;
    listhead->next=NULL;
    }
    void list::insertlist(elementtype a,position x){
    position temp;
    temp=x->next;
    x->next=new celltype;
    x->next->next=temp;
    x->next->value=a;}
    void list::deletelist(position p)
    {
    p->next=p->next->next;}
    position list::first()
    {
    return(listhead);}
    position list::endele()
    {
        position p;
    p=listhead;
    while(p->next!=NULL)
        {
        p=p->next;
    }
    return(p);
    }
    position list::next(position p)
    {
        return(p->next);
    }
    void list::print()
    {
        position p;
        p=listhead->next;
        while(p->next!=NULL)
        {
            cout<<p->value;
            cout<<"\n";
            p=p->next;
        }
        cout<<p->value;

    }
int main()
{
    list a;
    a.null();
    for(int i=0;i<5;i++)
    {
        a.insertlist(i,a.endele());
    }
    a.print();
    a.deletelist(a.first());
    a.print();

    return(0);


}
