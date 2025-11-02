import java.util.Scanner;

public class A617 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        int count=0;
        while(x>5){
            count++;
            x-=5;
        }
        System.out.println(++count);
    }
}
