
package codechef2017;

import java.io.IOException;
import java.util.Scanner;

public class croutine {
   public static Scanner sc=new Scanner(System.in);
   public static void main(String[] args)throws IOException{ 
       int t;
       String s;
       t=sc.nextInt();
       boolean ans=false;
       for(int i=0;i<t;i++)
       {
           ans=false;
           s=sc.next();
           int j = 0;
	while(j<s.length() && s.charAt(j) == 'C' ) {
		j++;
	}
	if( j == s.length()) {
		ans = true;
	}
	else if(s.charAt(j) == 'E') {
		while(j<s.length() && s.charAt(j) == 'E' ) {
			j++;
		}
		if( j == s.length())
			ans = true;
		else if(s.charAt(j) == 'S') {
			while(j<s.length() && s.charAt(j) == 'S' ) {
				j++;
			}
			if( j == s.length())
				ans = true;
		}
	}
	else if(s.charAt(j) == 'S'){
		while(j<s.length() && s.charAt(j) == 'S' ) {
			j++;
		}
		if( j == s.length())
			ans = true;
	}
	if(ans)
		System.out.println("yes");
	else
		System.out.println("no");	
       }
   } 
}
