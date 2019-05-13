/* 
Author : Siddharth Nahar
Entry number : 2016csb1043
Use : Generic class with different lists to be implemented.
1.ArrayList

Declared as package will be used by futher code
Using inbuilt functionalities.
*/
package AlgorithmFun1;

import java.io.*;
import java.util.*;
import java.lang.*;


/*Implemented generic array list using inbuilt
  It will be converted to jar file*/
public class ArrayLists<T extends Comparable<T> > implements Lists<T>{

     private ArrayList<T> list;
     
     
     /* Default Constructor for array gives it default size as 0*/
     public ArrayLists(int k){
         list = new ArrayList<T>(k);
     }
     
     
     /*Returns size of the list*/
     public int sizeOfList(){
     
        return list.size();
     }
 
 
     /*Adding an element to the list*/
     public void pushElement(T element){
         list.add(element);
     }
    /*Removing an Element from list gives exception message if list is empty*/
     public void popElement(int index){
     
         try{
           list.remove(index);
         }
         catch(IndexOutOfBoundsException e){
           System.out.println(e.getMessage());
         }
     }
     /*  To override interface */
     public void popElement(){
          
         popElement(0);
     }
     
     /* Searches an element and return if is present or not*/
     public boolean searchElement(T obj){
      
         if(list.indexOf(obj) != -1)
           return true;
           
         return false;
     }
     
     /* Return top element of list*/    
     public T top(){
         
         return list.get(0);
     }
     /* Returns the max of list*/
     public T getMax(){
        
        int i;
        T max = list.get(0);
        for(i=0;i<sizeOfList();i++){
        
            if(max.compareTo(list.get(i)) <= 0)
              max = list.get(i);
       }
       
       return max;    
     
     }
}
