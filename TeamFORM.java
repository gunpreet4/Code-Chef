
package codechef2017;

import java.io.IOException;
import java.util.Scanner;

public class TeamFORM {
  public static Scanner sc=new Scanner(System.in);

    public static void main(String[] args)throws IOException{
    int t=sc.nextInt();
    for(int i=0;i<t;i++)
    {
        int n=sc.nextInt();
        int m=sc.nextInt();
        int temp=2*m;
        int a[]=new int[temp];
        for(int j=0;j<temp;j++)
        {
            a[j]=sc.nextInt();
        }
        if(n%2==0)
            System.out.println("yes");
        else
            System.out.println("no");
    }
}  
}
