
package codechef2017;
//NOT COMPLETD
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;


public class COOK82A {
    public static BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args)throws IOException{
        int t=Integer.parseInt(br.readLine());
        for(int i=0;i<t;i++)
        {
            int b=0,r=0,m=0,e=0;
            for(int j=0;j<4;j++)
            {
                String s[]=br.readLine().split(" ");
                if(s[0].charAt(0)=='R')
                    r=Integer.parseInt(s[1]);
                else if(s[0].charAt(0)=='M')
                        m=Integer.parseInt(s[1]);
                else if(s[0].charAt(0)=='B')
                    b=Integer.parseInt(s[1]);
                else
                    e=Integer.parseInt(s[1]);
            }
            if(r<m&&b>e)
                System.out.println("Barcelona");
            else
                System.out.println("RealMadrid");
        }
    }
}
