  import java.io.*;
        import java.util.ArrayList;
        import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner input = new Scanner(System.in);
        String s=input.next();
        ArrayList<String> l= new ArrayList<String>();
        boolean res=partitionHelper(s,l,0,s.length(),0);
        if(res==false){
            System.out.println("Impossible");
        }
        for(String x:l){
            System.out.println(x);
        }
    }
    static boolean partitionHelper(String s, ArrayList<String> l, int i, int j, int count){
        if(i==s.length()){
            return false;
        }
        if(count==2){
            if(isPalindrome(s,i,j-1)){
                l.add(s.substring(i,j));
                return true;
            }
            else{
                return false;
            }
        }
        for(int k=i;k<j;k++){
            if(isPalindrome(s,i,k)){
                l.add(s.substring(i,k+1));
                boolean res=partitionHelper(s,l,k+1,j,count+1);
                if(res==true){
                    return true;
                }
                l.remove(l.size()-1);
            }

        }
        return false;
    }
    static boolean isPalindrome(String s,int i,int j){
        while(i<=j){
            if(s.charAt(i)==s.charAt(j)){
                i++;
                j--;
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
}