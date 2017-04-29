#include<iostream>
using namespace std;
typedef struct celltype* position;
typedef int elementtype;
struct celltype
{
    elementtype value;
    position next;
};
class list
{
private:
    position listhead;
public:
    void null();
    void insertlist(elementtype e,position p);
    void deletelist(position p);
    position first();
    position last();
    position next(position p);
    };
    void list::null(){
    listhead= new celltype;
    listhead->next=NULL;
    }
    void list::insertlist(elementtype e,position p){
        position temp;
        temp=p->next;
        p->next=new celltype;
        p->next->next=temp;
        p->next->value=e;
    }
    void list::deletelist(position p){
    p->next=p->next->next;}
position list::first(){
return(listhead);}
position list::last(){
position p;
p=listhead;
while(p->next!=NULL){
    p=p->next;}
    return(p);
}
position list::next(position p){
return(p->next);}
