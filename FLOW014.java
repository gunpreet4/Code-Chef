
package codechef2017;

import java.io.IOException;
import java.util.Scanner;


public class FLOW014 {
  public static Scanner sc=new Scanner(System.in);
public static void main(String[] args)throws IOException{
    int t=sc.nextInt();
    for(int i=0;i<t;i++)
    {
       int h=sc.nextInt();
       float c=sc.nextFloat();
       int ts=sc.nextInt();
       if(h>50&&c<0.7f&&ts>5600)
           System.out.println("10");
       else if(h>50&&c<0.7f)
           System.out.println("9");
       else if(c<0.7f&&ts>5600)
           System.out.println("8");
       else if(h>50&&ts>5600)
           System.out.println("7");
       else if(h>50||c<0.7f||ts>5600)
           System.out.println("6");
       else
           if(h<51&&c>=0.7&&ts<=5600)
               System.out.print("5");
}  
}
}
