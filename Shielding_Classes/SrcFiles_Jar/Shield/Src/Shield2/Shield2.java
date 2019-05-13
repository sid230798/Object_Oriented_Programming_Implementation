/* 
Author : Siddharth Nahar
Entry number : 2016csb1043
Use : Shielding Classes for Both Algorithms
      and provides reference to classes.
*/


/*Use as package in different code
  Name same as directory name*/

package Shield2;

//import AlgorithmFun1.* ;
import AlgorithmFun2.* ;
import java.io.*;
import java.util.*;
import java.lang.*;

public class Shield2{

       /*Creates General matrix with two dimension*/
       public Matrix getObjList(int m,int n){
             
             try{
                return new Matrix(m,n);       
             }catch(Exception e){
                System.out.println(e.getMessage());
                return null;
             }
             
       }
       
       /*Overloading for function getObjList having keyword name for Square and Identity*/
       public Matrix getObjList(String str,int m){
       
             try{
        /*Call for square matrix with single dimension*/            
              if(str.compareTo("Square") == 0)
                return new SquareMatrix(m);
        /*Call for Identity matrix of some dimension*/        
              else if(str.compareTo("Identity") == 0)
                return new IdentityMatrix(m);
                
              else
                return null;
                       
             }
             catch(Exception e){
                System.out.println(e.getMessage());
                return null;
             }
      } 
}
