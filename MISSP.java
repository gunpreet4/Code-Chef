
package codechef2017;

import java.io.IOException;
import java.util.Scanner;


public class MISSP {
    public static Scanner sc=new Scanner(System.in);
    public static void main(String[] args)throws IOException
    {
        int t=sc.nextInt();
        for(int i=0;i<t;i++)
        {
            int n=sc.nextInt();
            int a,c=0;
            for(int j=0;j<n;j++)
            {
                a=sc.nextInt();
                c ^=a;
                System.out.println(c);
            }
            System.out.println(c);
        }
    }
}
