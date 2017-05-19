
package codechef2017;

import java.io.IOException;
import java.util.Scanner;

public class CHN08 {
    public static Scanner sc=new Scanner(System.in);
    public static  void main(String[] args)throws IOException{
       long mod=1000000007;
       int t=sc.nextInt();
       for(int i=0;i<t;i++)
       {
           int a,b,n;
           a=sc.nextInt();
           b=sc.nextInt();
           n=sc.nextInt();
           n=n%6;
           if(n==0) n=a-b;
else if(n==1) n=a;
else if(n==2) n=b;
else if(n==3) n=b-a;
else if(n==4) n=-a;
else if(n==5) n=-b;
if(n>=0) System.out.println(n%mod);
else System.out.println((n%mod)+mod);
       }
    }
}
