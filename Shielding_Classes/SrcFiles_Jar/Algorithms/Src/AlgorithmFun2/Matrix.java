/* 
Author : Siddharth Nahar
Entry number : 2016csb1043
Use : Matrix class specifying specific functions Calculate
      1.Matrix multiplication
      2.Determinant of matrix
*/

package AlgorithmFun2;

import java.io.*;
import java.util.*;
import java.lang.*;


/*Implemnted using double array of user size and have
  functionality random initialization and user initalization*/
  
public class Matrix implements MatrixInterface{

      protected double[][] mat;
      protected int m,n;
      /*Constructor taking two inputs as parameter*/
      
      public Matrix(){
      
      }
      public Matrix(int m,int n) throws Exception{
         
             this.m = m;
             this.n = n;
             if(m<=0 || n<=0)
               throw new Exception("Invalid sizes of Matrix");
             else
               mat = new double[m][n];
               
     }
     
     /*Initialization of matrix Random or User input*/
     public void matInit(){
     
            Scanner sc = new Scanner(System.in);
            System.out.println("Press 0 for Random numbers or Press 1 for User input");
            int option = sc.nextInt();
            if(option == 0){
            
              Random rand = new Random();
              int i,j;
              for(i=0;i<m;i++){
                 for(j=0;j<n;j++)
                    mat[i][j] = rand.nextDouble();
              }
              
            
            }
            else{
            
              System.out.println("Please enter values for matrix");
              int i,j;
              for(i=0;i<m;i++){
                 for(j=0;j<n;j++)
                    mat[i][j] = sc.nextDouble();
              }
            
            }
     
     
     }
    /*Multiplication of matrix using loops in O(n^3)*/  
    public Matrix matMultiply(Matrix obj) throws Exception{
    
           if(n != obj.m)
             throw new Exception("Matrix multiplication is not possible");
           else{
           
             Matrix ans = new Matrix(m,obj.n);
             int i,j,k;
             for(i=0;i<m;i++){
                for(j=0;j<obj.n;j++){
                   double sum=0;
                   for(k=0;k<n;k++)
                      sum += mat[i][k]*obj.mat[k][j];
                      
                   ans.mat[i][j] = sum;
                }
             
            }
            
            return ans;
                      
          }     
    
    }
    
    /*Generating Cofactor matrix for Determinant claculation*/
    protected void getCofactor(double arr[][], double temp[][], int p, int q, int size){
    
            int i = 0, j = 0;
         
            // Looping for each element of the matrix
            for (int row = 0; row < size; row++)
            {
                for (int col = 0; col < size; col++)
                {
                    //  Copying into temporary matrix only those element
                    //  which are not in given row and column
                    if (row != p && col != q)
                    {
                        temp[i][j++] = arr[row][col];
         
                        // Row is filled, so increase row index and
                        // reset col index
                        if (j == size - 1)
                        {
                            j = 0;
                            i++;
                        }
                    }
                }
            }
    }
 
   /*Calculates determinant of matrix using recursion*/
    protected double DeterminantOfMatrix(double arr[][],int size){
        
        double D = 0; // Initialize result
     
        // Base case : if matrix contains single
        // element
        if (size == 1)
            return arr[0][0];
         
        // To store cofactors
        double temp[][] = new double[m][m]; 
         
        // To store sign multiplier
        int sign = 1; 
     
        // Iterate for each element of first row
        for (int f = 0; f < size; f++)
        {
            // Getting Cofactor of mat[0][f]
            getCofactor(arr, temp, 0, f, n);
            D += sign * arr[0][f] * DeterminantOfMatrix(temp, size - 1);
     
            // terms are to be added with 
            // alternate sign
            sign = -sign;
        }
     
        return D;

    }
    
    /*Calls Determinant function*/
    public double Determinant() throws Exception{
    
         if(m!=n)
           throw new Exception("Determinant is possible only for Square matrix");
         else{
         
           return DeterminantOfMatrix(this.mat,m);
         
         }    
    
    }
 
  /*Display of matrix operation*/   
   public void Display(){
   
        int i,j;
        for(i=0;i<m;i++){
           for(j=0;j<n;j++)
              System.out.print(" " + mat[i][j]);
           
           System.out.println();
        }
   
   }
   
}
