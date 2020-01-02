import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int t = sc.nextInt();
	    while(t-->0){
	        int n = sc.nextInt();
	        int m = sc.nextInt();
	        
	        int result = (int) Math.round(Math.pow(m,1.0/n));
	        if(Math.pow(result,n)==m)
	        System.out.println(result);
	        else
	        System.out.println(-1);
	    }
	}
} 
