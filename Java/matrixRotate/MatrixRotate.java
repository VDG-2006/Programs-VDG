package Java.matrixRotate;

import java.util.Scanner;

public class MatrixRotate {
    public static void rotateMatrix(int[][] mat){
        int temp;
        int n=mat.length;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                temp=mat[i][j];
                mat[i][j]=mat[j][i];
                mat[j][i]=temp;
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                temp=mat[i][j];
                mat[i][j]=mat[i][n-j-1];
                mat[i][n-j-1]=temp;
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(mat[i][j]+" ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[][] mat=new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=sc.nextInt();
            }
        }
        rotateMatrix(mat);
        sc.close();
    }
}
