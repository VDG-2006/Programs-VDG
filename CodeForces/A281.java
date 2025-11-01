import java.util.Scanner;

public class A281 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        if(s!=null){
            char c=s.charAt(0);
            System.out.print((c>='a' && c<='z')?(char)(c-32): c);
            for(int i=1;i<s.length();i++) System.out.print(s.charAt(i));
        } else System.out.println(s);
    }
}
