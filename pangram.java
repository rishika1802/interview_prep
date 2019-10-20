import java.util.*;
class gfg{
    static boolean ispangram(String s){
        boolean mark[]=new boolean[26];
        int index=0;
        for(int i=0;i<s.length();i++){
            if('A'<=s.charAt(i) &&'Z'>=s.charAt(i)){
                index=s.charAt(i)-'A';
                
            }
            else if('a'<=s.charAt(i) && 'z'>=s.charAt(i)){
                index=s.charAt(i)-'a';
                
            }
            mark[index]=true;
        }
        for(int i=0;i<=25;i++){
            if(mark[i]==false){
                return false;
            }
        }
        return true;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        if(ispangram(str)==true){
            System.out.println("yes,it is");
        }
        else{
            System.out.println("no");
        }
    }
}
