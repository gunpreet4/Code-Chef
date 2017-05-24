
package codechef2017;

import java.io.IOException;
import java.util.Scanner;


public class Snape {
    public static Scanner sc=new Scanner(System.in);
    public static void main(String[] args)throws IOException{
        int t=sc.nextInt();
        for(int i=0;i<t;i++)
        {
            int b=sc.nextInt();
            int ls=sc.nextInt();
            float mrs=(float) Math.sqrt(ls*ls+b*b);
            float mnrs=(float) Math.sqrt(ls*ls-b*b);
            System.out.print(mnrs);
            System.out.println(" "+mrs);
        }
    }
}
