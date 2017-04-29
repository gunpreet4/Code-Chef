#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int w;
    float b,f;
    scanf("%d",&w);
    scanf("%f",&b);
    if((0 <= b <= 2000.00) && (0 <= w <= 2000) &&  (w% 5 == 0) && (w<=(b-0.50)))
        {
                    f=(b-w-0.50);
                    printf("%0.2f",f);
                }
            else
                {
                    printf("%0.2f",b);
                }

    return 0;
}
