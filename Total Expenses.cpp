#include<stdio.h>
int main(void)
{
    int t,i;
    float q,p,f,sp;
    scanf("%d",t);
    for(i=0;i<t;i++)
    {
        scanf("%f %f",&q,&p);
        if(q>=1000)
        {
            f=q*p;
            sp=f-(0.10*f);
        }
        else
        {
            sp=q*p;
        }
        printf("%.6f",sp,"\n");
    }
    return 0;
}
