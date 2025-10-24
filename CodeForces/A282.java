
import java.util.Scanner;

public class A282 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=Integer.parseInt(sc.nextLine());
        int x=0;
        while(n-->0){
            String op=sc.nextLine();
            if(op.equals("++X")) ++x;
            else if(op.equals("X++")) x++;
            else if(op.equals("X--")) x--;
            else if(op.equals("--X")) --x;
        }
        System.out.println(x);
        sc.close();
    }
}
