
import java.util.Scanner;

public class A158 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        int minScore=0;
        if(a[k-1]>0) minScore=a[k-1];
        int passCount=0;
        for(int i: a){
            if(i>0 && i>=minScore) passCount++;
        }
        System.out.println(passCount);
        sc.close();
    }
    
}
