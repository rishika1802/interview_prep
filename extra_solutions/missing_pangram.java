import java.util.*;
class gfg{
    static int checkmiss(String str){
        boolean mark[]=new boolean[26];
        int index=0;
        for(int i=0;i<str.length();i++)
        {
            if('A'<=str.charAt(i) &&'Z'>=str.charAt(i)){
                index=str.charAt(i)-'A';
                
            }
            else if('a'<=str.charAt(i) && 'z'>=str.charAt(i)){
                index=str.charAt(i)-'a';
                
            }
            mark[index]=true;
        }
        for(int i=0;i<26;i++){
            if(mark[i]==false){
                System.out.print((char)(i+'a'));
            }
        }
        return 0;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        int r;
        checkmiss(str);
        
    }
}
