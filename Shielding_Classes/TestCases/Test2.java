/* 
Author : Siddharth Nahar
Entry number : 2016csb1043
Use : Testing class for shielding and Lists interface

*/

import Shield2.*;
import AlgorithmFun2.*;
import java.io.*;
import java.util.*;
import java.lang.*;


/*User class interface for showing shield*/
public class Test2{


      /*Demostration for Matrix Operation*/
   public static void main(String args[]){
      
       try{
            Shield2 Object = new Shield2();
            /*Created a matrix of 2*3*/
            Matrix k = Object.getObjList(2,3);
            /*Demonstration of multiplication*/
            Matrix p = Object.getObjList("Identity",3);
            System.out.println("Demonstration of Matrix Multiplication of 2*3 and 3*3 Identity : ");
            System.out.println("Please Input values by command line or click for Random numbers for 2*3 matrix");            
            k.matInit();
            p.matInit();
            System.out.println("First matrix = ");
            k.Display();
            System.out.println("Second matrix is Identity matrix = ");
            p.Display();
            System.out.println("Matrix after multiplication result = ");
            Matrix c = k.matMultiply(p);
            c.Display();
            //System.out.println(k.Determinant());
            
            System.out.println("Demonstration of determinant of matrix : ");
            Matrix det = Object.getObjList("Square",3);
            System.out.println("Please Input matrix of 3*3 for Determinant Calculation");            
            det.matInit();
            System.out.println("Matrix inputed = ");
            det.Display();
            System.out.println("Determinant of matrix inputed = " + det.Determinant());
                                                
       }catch(Exception e){
       
              System.out.println(e.getMessage());
              
       }

  }
      
}
