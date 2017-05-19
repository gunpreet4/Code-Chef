
package codechef2017;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class SIMDISH {
  static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
  public static void main(String[] args)throws IOException{
      int t=(Integer.valueOf(br.readLine()));
      for(int i=0;i<t;i++)
      {
          String s1=br.readLine();
          String s2=br.readLine();
           String[] temp1=s1.split(" ");
           String[] temp2=s2.split(" ");
           int count=0;
           for(String s3 : temp1){
			for(String s4 : temp2){
				if(s3.equals(s4))
				{count+=1;}
                        }}
           if(count==2)
               System.out.println("similar");
           else
               System.out.println("dissimilar");
      }
  }
}

