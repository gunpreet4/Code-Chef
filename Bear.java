
package codechef2017;

import java.io.IOException;
import java.util.Scanner;
public class Bear {
  public static void main(String[] args)throws IOException{
      Scanner sc=new Scanner(System.in);
      int t,a,b;
      t=sc.nextInt();
      for(int i=0;i<t;i++)
      {
          a=sc.nextInt();
          b=sc.nextInt();
          int count=1;
          int temp=a+b;
          for(int j=0;j<temp;j++)
          {
              if(count<=a)
              {
                  
                  a=a-count;
                  count++;
               //  System.out.println(a);
                  if(count<=b){
                      
                      b=b-count;
                      count++;
                       //System.out.println(b);
                  }
                  else{
                      System.out.println("Limak");
                      break;
                  }
             }
              else
              {
                  System.out.println("Bob");
                  break;
              }
          }
      }
  }
}
