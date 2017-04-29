
package codechef;
import java.util.*;
import java.io.IOException;

public class SO {
    public static void main(String[] args)throws IOException
    {
        Scanner sc=new Scanner(System.in);
        int t,n,k,sum,temp=0;
        t=sc.nextInt();
        for(int i=0;i<t;i++)
        {
          n=sc.nextInt();
          k=sc.nextInt();
          int[] a=new int[n+k];
          for(int j=0;j<n;j++)
          {
              a[j]=sc.nextInt();
          }
          for(int l=0;l<k;l++)
          {   sum=0;temp=0;
              for(int m=0;m<n;m++)
              {
                  sum=sum+a[m];
              }
              temp=sum+1;
              a[l+n]=temp;
          }
          if(temp%2==0)
              System.out.println("even");
          else
              System.out.println("odd");
    }}
    }
