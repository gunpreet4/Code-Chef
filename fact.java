
package codechef;
import java.math.BigInteger;
import java.util.*;
public class fact {
    public static void main(String[] args)throws java.lang.Exception
    {
        Scanner sc=new Scanner(System.in);
        int n,t;
        t=sc.nextInt();
        for(int i=0;i<t;i++){
          n=sc.nextInt();
            BigInteger factorial=BigInteger.ONE;
          for(int j=2;j<=n;j++)
          {
              factorial=factorial.multiply(new BigInteger(String.valueOf(j)));
          }
          System.out.println(factorial);
        } 
       
        
        
    }
}
