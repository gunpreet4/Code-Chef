
package codechef2017;

import java.io.IOException;
import java.util.Scanner;


public class TEMPLELA {
  public static Scanner sc=new Scanner(System.in);
public static void main(String[] args)throws IOException{
   int t=sc.nextInt();
   for(int i=0;i<t;i++)
   {
       int flag=0;
       int n=sc.nextInt();
       int a[]=new int[n];
       for(int j=0;j<n;j++)
       {
           a[j]=sc.nextInt();
       }
       if(a[0]!=1)
           flag=1;
       int sum0=0;
       int sum1=0;
       for(int j=0;j<(n/2);j++)
       {
           if(a[j]!=(a[j+1]-1)){
               flag=1;
               break;
           }
               sum0+=a[j];
       }
      // System.out.println("Sum=  "+sum0);
       for(int j=((n/2)+1);j<=(n-1);j++)
       {
           sum1+=a[j];
       }
       for(int j=((n/2)+1);j<(n-1);j++)
       {
           if(a[j]!=(a[j+1]+1)){
               flag=1;
               break;
           }
       }
      // System.out.println("Sum1=  "+sum1);
       if(sum0!=sum1)
           flag=1;
       if(flag==0)
           System.out.println("yes");
       else
           System.out.println("no");
   }
}  
}
