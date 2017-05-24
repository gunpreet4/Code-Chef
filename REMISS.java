
package codechef2017;

import java.io.IOException;
import java.util.Scanner;

public class REMISS {
   public static void main (String[] args)throws IOException{
         Scanner sc=new Scanner(System.in);
       int t=sc.nextInt();
       while(t!=0)
       {
           int a=sc.nextInt();
           int b=sc.nextInt();
           if(a>b)
               System.out.print(a);
           else
               System.out.print(b);
           System.out.println(" "+(a+b));
           t--;
       }
   } 
}
