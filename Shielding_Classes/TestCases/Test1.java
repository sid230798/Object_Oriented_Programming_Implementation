/* 
Author : Siddharth Nahar
Entry number : 2016csb1043
Use : Testing class for shielding and Lists interface

*/


  
import Shield1.*;
import AlgorithmFun1.*;
import java.io.*;
import java.util.*;
import java.lang.*;


/*User class interface for showing shield*/
public class Test1{


    public static void main(String args[]){
    
        Shield1<Integer> Object = new Shield1<Integer>();
        
        /*Created a abstraction of Shield class over ArrayLists*/
        Lists<Integer> obj = Object.getObjList("Array");
        
        /*Demonstration of array list*/
        System.out.println("Testing of Array List");
        obj.pushElement(2);
        obj.pushElement(4);
        System.out.println("Max of input element : " + obj.getMax());
        obj.pushElement(12);
        obj.popElement(0);
       
        System.out.println("Size of List : " + obj.sizeOfList());
        
        /*Demonstration of stack list*/
        System.out.println("Testing of Stack List");
        Shield1<String> Object2 = new Shield1<String>(); 
        Lists<String> objStack = Object2.getObjList("Stack");
        //System.out.println(objStack.sizeOfList());
        objStack.pushElement("Sid");
        
        objStack.pushElement("Ram");
        objStack.popElement();
        System.out.println("Top Element after removal : " + objStack.top());
                
      
            
       }

}
