import java.util.Scanner;

public class A266{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=Integer.parseInt(sc.nextLine());
        char[] a=new char[n];
        int count=0;
        a=sc.nextLine().toCharArray();
        int slow=0, fast=1;
        while(fast<n){
            if(a[slow]==a[fast]){
                count++;
                fast++;
            }
            else {
                slow=fast;
                fast++;
            }
        }
        System.out.println(count);
    }
}