
package codechef2017;

import java.io.IOException;
import java.util.Scanner;

public class CHN09 {
public static Scanner sc=new Scanner(System.in);
public static void main(String[] args)throws IOException
{
    int t=sc.nextInt();
    for(int j=0;j<t;j++){
    String s=sc.next();
    int a=0;
    int b=0;
    for(int i=0;i<s.length();i++)
    {
        if(s.charAt(i)=='a')
            a++;
        else
            b++;
    }
    if(a<b)
        System.out.println(a);
    else
        System.out.println(b);
                }}
}
