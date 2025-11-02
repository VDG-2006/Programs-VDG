import java.util.Scanner;

public class A791 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        int count=0;
        while(a<=b){
            count++;
            a*=3;
            b*=2;
        }
        System.out.println(count);
    }
}
