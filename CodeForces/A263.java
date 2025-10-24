import java.util.Scanner;

public class A263 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] arr=new int[5][5];
        int x1=-1,y1=-1;
        int moves=0;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                arr[i][j]=sc.nextInt();
                if(arr[i][j]==1){
                    x1=i; 
                    y1=j;
                }
            }
        }
        moves=Math.abs(2-x1)+Math.abs(2-y1);
        System.out.println(moves);
        sc.close();
    }
}
