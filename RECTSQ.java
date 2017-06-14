
package codechef2017;

import java.io.IOException;
import java.util.Scanner;


public class RECTSQ {
    public static Scanner sc=new Scanner(System.in);
    public static int gcd(int x, int y)
{
    while( x % y > 0 )
    {
        int r = x % y;
        x = y;
        y = r;
    }
    return y;
}

    public static void main(String[] args)throws IOException
    {
        int t=sc.nextInt();
        for(int i=0;i<t;i++)
        {
            int l=sc.nextInt();
            int b=sc.nextInt();
            int temp=gcd(l,b);
            System.out.println((l/temp)*(b/temp));
        }
    }
}
