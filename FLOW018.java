package codechef2017;

import java.io.IOException;
import java.util.Scanner;

public class FLOW018 {
  public static Scanner sc=new Scanner(System.in);
public static void main(String[] args)throws IOException{
    int t=sc.nextInt();
    for(int i=0;i<t;i++)
    {
        int n=sc.nextInt();
        long temp=1;
        while(n!=0)
        {
            temp=temp*n;
            n--;
        }
        System.out.println(temp);
    }
}  
}
