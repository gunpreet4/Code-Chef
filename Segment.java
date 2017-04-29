
package codechef2017;

import java.util.Scanner;


public class Segment {
    public static void check(String s,int n)
    {
        int flag=0;
        for(int i=n+1;i<(s.length()-1);i++)
        {
            if(s.charAt(i)!='0')
                flag=1;
        }
        if(flag==0)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
    public static void main(String[]args)throws java.lang.Exception
    {
        Scanner sc=new Scanner(System.in);
        int t;
        t=sc.nextInt();
        String s;
        for(int i=0;i<t;i++)
        {
            s=sc.next();
            for(int j=0;j<s.length();j++)
            {
                if(s.charAt(j)=='1')
                {
                    if(s.charAt(j+1)!='1')
                    {
                     check(s,j);
                    break;
                    }
                }
            }
        }
    }
}
