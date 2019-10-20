
import java.util.*;
public class rish{
    
    
    
    static void cpy(char s2[],char s1[]){
        for(int i=0;i<s1.length;i++){
            s2[i]=s1[i];
        }
    }

     public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        
        char a[]=str.toCharArray();
        char b[]=new char[a.length];
        cpy(b,a);
        System.out.println(String.valueOf(b));
     }
}
