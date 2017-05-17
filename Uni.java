
package codechef2017;

import java.io.IOException;
import java.util.Scanner;

public class Uni {
    public static Scanner sc=new Scanner(System.in);
    public static void main(String[] args)throws IOException{
        int t;
        t=sc.nextInt();
        for(int i=0;i<t;i++)
        {
            int n=sc.nextInt();
            int a[]=new int[n];
            for(int j=0;j<n;j++)
            {
                a[j]=sc.nextInt();
            }
            int max=a[0];
            for(int k=1;k<n;k++)
            {
                if(max<a[k])
                    max=a[k];
            }
            System.out.println(n-max);
    }
}
}
