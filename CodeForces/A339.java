import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class A339 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String eq=sc.nextLine();
        List<Integer> l=new ArrayList<>();
        for(char c: eq.toCharArray()){
            if(c!='+') l.add(c-'0');
        }
        Collections.sort(l);
        for(int i=0;i<l.size()-1;i++){
            System.out.print(l.get(i)+"+");
        }
        System.out.println(l.get(l.size()-1));
        sc.close();
    }
}
