/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package codechef2017;

import java.io.IOException;
import java.util.Scanner;

/**
 *
 * @author Gunpreet Singh
 */
public class FLOW013 {
    public static Scanner sc=new Scanner(System.in);
    public static void main(String[] args)throws IOException{
      int t=sc.nextInt();
      for(int i=0;i<t;i++)
      {
          int a=sc.nextInt();
          int b=sc.nextInt();
          int c=sc.nextInt();
          int temp=a+b+c;
          if(temp==180)
              System.out.println("YES");
          else
              System.out.println("NO");
      }
    }
}
