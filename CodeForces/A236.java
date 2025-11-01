import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class A236 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        Set<Character> set=new HashSet<>();
        for(char c: s.toCharArray()){
            set.add(c);
        }
        System.out.println(set.size()%2==0?"CHAT WITH HER!":"IGNORE HIM!");
    }
}
