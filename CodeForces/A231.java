
import java.util.Scanner;

public class A231 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int i,j,k,count=0,qCount=0;
        for(int a=0;a<n;a++){
            count=0;
            i=sc.nextInt();
            if(i==1) count++;
            j=sc.nextInt();
            if(j==1) count++;
            k=sc.nextInt();
            if(k==1) count++;
            if(count>=2) qCount++;
        }
        System.out.println(qCount);
        sc.close();
    }
}
