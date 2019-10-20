import java.util.*;
class gfg{
    static int only_string(String str){
        String s="";
        for(int i=0;i<str.length();i++)
        {
            if('A'<=str.charAt(i) &&'Z'>=str.charAt(i)|| str.charAt(i)==' '){
                s=s+str.charAt(i);
                
            }
            else if('a'<=str.charAt(i) && 'z'>=str.charAt(i)){
                s=s+str.charAt(i);
                
            }
           
        }
        System.out.println(s);
        return 0;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        
        only_string(str);
        
    }
}
