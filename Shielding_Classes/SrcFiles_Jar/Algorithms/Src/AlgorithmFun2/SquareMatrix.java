/* 
Author : Siddharth Nahar
Entry number : 2016csb1043
Use : Square matrix for special matrix definition and same rows and columns
*/

package AlgorithmFun2;

import java.io.*;
import java.util.*;
import java.lang.*;


/*Implemnted using double array of user size and have
  functionality random initialization and user initalization*/
  
public class SquareMatrix extends Matrix{

     /*Constructor for square matrix taking input as size dimension*/
       public SquareMatrix(int m) throws Exception{
       
              this.m = m;
              this.n = m;
              if(m<=0)
                throw new Exception("Invalid Size of matrix");
              else
                mat = new double[m][m];
       }
      
      /*Initialization of matrix*/
      public void matInit(){
              super.matInit();
      
      }
       
     /*Display of matrix*/
       public void Display(){
              
              super.Display();
       }
       
     /*Get determinant of matrix*/
     public Matrix matMultiply(Matrix obj) throws Exception{
     
            return super.matMultiply(obj); 
     
     
     }
     
     

}
