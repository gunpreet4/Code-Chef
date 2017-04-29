#include <stdio.h>

int main(void) {
    int t,N,flag=-1,F;
    scanf("%d",&t);
    int i;
    while(t--)
    {
        scanf("%d",&N);
        int seq[N];
        int j;
        for(j=0;j<N;j++)
        {
            scanf("%d",j+seq);
        }
        scanf("%d",&F);
        int fseq[F];

        for(j=0;j<F;j++)
        {
            scanf("%d",j+fseq);
        }
        int count=0,k=0;
      /*  for(j=0;j<N;j++)
        {
            if(seq[j]==fseq[k]) {
                fseq[k]=0;
                count++;
                k++;

            }
            else
            {
                count=0;k=0;
            }
            //printf("%d %d ",count,F);
            if(count>=F)
            {
                flag=1;
                break;
            }
            else flag=0;
        }*/
        for(j=0;j<F;j++)
{
for(i=0;i<N;i++)
{
if(fseq[j]==seq[i])
{
    fseq[j]=0;
count++;
break;
}
}
}
      if(count>=F)  printf("Yes\n");
      else  printf("No\n");
    }
      return 0;
}
