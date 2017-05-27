
package codechef2017;

import java.io.IOException;
import java.util.Scanner;

public class BONDFOND {
    public static Scanner sc=new Scanner(System.in);
    public static void main(String[] args)throws IOException{
        long t=sc.nextLong();
        for(long i=0;i<t;i++)
        {
            long n=sc.nextLong();
            long temp=(long) (Math.log(n)/Math.log(2));
            //System.out.println(temp);
            //System.out.println(n%2);
                long temp1=(long) Math.pow(2, temp);
                long temp2=(long) Math.pow(2, (temp+1));
               // System.out.println(temp1);
                //System.out.println(temp2);
               // long l1=n-temp;
                //long l2=n-temp1;
                //System.out.println(l1+"     "+l2 );
                if((Math.abs(n-temp1))>(Math.abs(n-temp2)))
                    System.out.println(Math.abs(n-temp2));
                else
                    System.out.println(Math.abs(n-temp1));
        }
    }
}
