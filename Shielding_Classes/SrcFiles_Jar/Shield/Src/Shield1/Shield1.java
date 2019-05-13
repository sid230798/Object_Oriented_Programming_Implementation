/* 
Author : Siddharth Nahar
Entry number : 2016csb1043
Use : Shielding Classes for Both Algorithms
      and provides reference to classes.
*/


/*Use as package in different code
  Name same as directory name*/

package Shield1;

import AlgorithmFun1.* ;
//import AlgorithmFun2.* ;
import java.io.*;
import java.util.*;
import java.lang.*;

/*Shield class for sending reference of Algorithm*/

public class Shield1<T extends Comparable<T> >{

    /*Returns generic list of same type*/
      public Lists<T> getObjList(String str){
      
             if(str.compareTo("Array") == 0)
               return new ArrayLists<T>(0);
               
             else if(str.compareTo("Stack") == 0)
               return new StackLists<T>();
               
             else
               return null;
      
      }
      /*Returns lists for array and some size*/
      public Lists<T> getObjList(String str,int size){
      
              if(str.compareTo("Array") == 0)
                return new ArrayLists<T>(size);
              else
                return null;
      
      }

}  
