
package codechef2017;

import java.io.IOException;
import java.util.Scanner;


public class LCH15JAB {
    public static Scanner sc=new Scanner(System.in);
    public static void main(String[] args)throws IOException
    {
        int t=sc.nextInt();
        while(t!=0)
        {
            String s=sc.next();
            int count=0;
            //System.out.println(s.length());
            for(int i=0;i<s.length();i++)
            {
                count=0;
                for(int j=0;j<s.length();j++)
                {
                   // count=0;
                    //System.out.println(s.charAt(i));
                   // System.out.println(s.charAt(j));
                    if(s.charAt(i)==s.charAt(j))
                        count++;
                }
                //System.out.println(count);
                if(count==(s.length()-count)){
                break;}
            }
            if(count==(s.length()-count))
                System.out.println("YES");
            else
                System.out.println("NO");
            t--;
        }
    }
}
