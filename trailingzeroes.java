import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
 {
	public static void main (String[] args)
	 {
	 //code
	 Scanner sc=new Scanner(System.in);
	 int test=sc.nextInt();
	 while(test-->0){
	     int n=sc.nextInt();
	     int sum=0;
	    for(int i=5;n/i>0;i*=5){
	       
	        sum=sum+n/i;
	    }
	    System.out.println(Math.round(sum));
	 }
	 }
 }
