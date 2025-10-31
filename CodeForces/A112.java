import java.util.Scanner;

public class A112 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s1=sc.nextLine().toLowerCase();
        String s2=sc.nextLine().toLowerCase();
        long sum1=0,sum2=0;
        int i=0;
        while(s1.charAt(i)==s2.charAt(i) && i+1<s1.length()){
            i++;
        }
        sum1=s1.charAt(i);
        sum2=s2.charAt(i);
        if(sum1==sum2) System.out.println("0");
        else if(sum1>sum2) System.out.println("1");
        else System.out.println("-1");
    }
}
