
package codechef2017;
import java.util.Scanner;
public class Puppy {
    public static int sum(int n)
    {
        int sum=0;
        for(int i=1;i<=n;i++)
        {
           sum=sum+i; 
        }
        return sum;
    }
    public static void main(String[]args)throws java.lang.Exception
    {
       Scanner sc=new Scanner(System.in);
       int t,d,n,sum=0;
       t=sc.nextInt();
       for(int i=0;i<t;i++)
       {
           d=sc.nextInt();
           n=sc.nextInt();
           if(d==1)
           {
               sum=sum(n);
           }
           else
           {
               for(int j=d;d>0;d--)
               {
                   sum=sum(n);
                   n=sum;
               }
           }
       System.out.println(sum);
    }
    }   
}

