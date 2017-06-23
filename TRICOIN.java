
package codechef2017;

import java.io.IOException;
import java.util.Scanner;

 class TRICOIN {
   public static Scanner sc=new Scanner(System.in);
   public static void main(String[] args)throws IOException
   {
       int t=sc.nextInt();
       for(int i=0;i<t;i++)
       {
           double n=sc.nextDouble();
			n=-1.0+Math.sqrt(1.0+8*n);
			n/=2;
			System.out.println((long)n);		
       }
   }
}
