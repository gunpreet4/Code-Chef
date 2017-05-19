
package codechef2017;

import java.io.IOException;
import java.util.Scanner;

public class CielRcpt {
  public static Scanner sc=new Scanner(System.in);
public static void main(String[] args)throws IOException{
    int t=sc.nextInt();
    for(int i=0;i<t;i++)
    {
        int p=sc.nextInt();
        int count=0;
        while(p!=0)
        {
            if(p>=2048)
            {
                p=p-2048;
                count++;
                continue;
            }
            if(p>=1024)
            {
                p=p-1024;
                count++;
                continue;
            }
            if(p>=512)
            {
                p=p-512;
                count++;
                continue;
            }
            if(p>=256)
            {
                p=p-256;
                count++;
                continue;
            }
            if(p>=128)
            {
                p=p-128;
                count++;
                continue;
            }
            if(p>=64)
            {
                p=p-64;
                count++;
                continue;
            }
            if(p>=32)
            {
                p=p-32;
                count++;
                continue;
            }
            if(p>=16)
            {
                p=p-16;
                count++;
                continue;
            }
            if(p>=8)
            {
                p=p-8;
                count++;
                continue;
            }
            if(p>=4)
            {
                p=p-4;
                count++;
                continue;
            }
            if(p>=2)
            {
                p=p-2;
                count++;
                continue;
            }
            if(p>=1)
            {
                p=p-1;
                count++;
                continue;
            }
        }
        System.out.println(count);
    }
}  
}
