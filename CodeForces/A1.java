import java.util.Scanner;

public class A1 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        long n=sc.nextInt();
        long m=sc.nextInt();
        long a=sc.nextInt();
        long rows=(n+a-1)/a;
        long cols=(m+a-1)/a;
        
        System.out.println(rows*cols);
    }
}
