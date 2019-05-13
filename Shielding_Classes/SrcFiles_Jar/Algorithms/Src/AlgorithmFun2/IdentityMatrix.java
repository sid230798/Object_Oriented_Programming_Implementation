/* 
Author : Siddharth Nahar
Entry number : 2016csb1043
Use : Identity matrix for special matrix definition and same rows and columns
*/

package AlgorithmFun2;

import java.io.*;
import java.util.*;
import java.lang.*;


/*Implemnted using double array of user size and have
  functionality random initialization and user initalization*/
  
public class IdentityMatrix extends SquareMatrix{

       private double[][] mat;
       private int m,n;
       
       /*Matrix initalization for identity*/
       public void matInit(){
       
              int i;
              for(i=0;i<m;i++)
                 mat[i][i] = 1;
       }
       
       /*Constructor of identity matrix*/
       public IdentityMatrix(int m) throws Exception{
       
              super(m);
              mat = super.mat;
              this.m = m;
              this.n = n;
              matInit();
             
       }

     /*Display of matrix*/
       public void Display(){
              
              super.Display();
       }
       
     /*Get determinant of matrix*/
     public Matrix matMultiply(Matrix obj) throws Exception{
     
            return super.matMultiply(obj); 
     
     
     }
     
     /*Determinant of identity is 1*/
     public double Determinant(){
     
            return 1;
     }


}
