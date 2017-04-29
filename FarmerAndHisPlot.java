import java.util.*;
public class FarmerAndHisPlot {
    public static void main(String[] args)
    {
        int t,n,m,total=0;
        Scanner sc=new Scanner(System.in);
        t=sc.nextInt();
       for(int i=0;i<t;i++)
        {
            n=sc.nextInt();
            m=sc.nextInt();
            if(n==m)
            {
                total=(n*(n+1)*((2*n)+1))/6;
        }
            if(n>m)
            {
                total=(m*(m+1)*(2*m+1))/6 + ((n-m)*m*(m+1))/2;
    }
            if(n<m)
            {
             int x=n;
             n=m;
             m=x;
             total=(m*(m+1)*(2*m+1))/6 + ((n-m)*m*(m+1))/2;
            }
            System.out.println(total);
        }
    }
}
