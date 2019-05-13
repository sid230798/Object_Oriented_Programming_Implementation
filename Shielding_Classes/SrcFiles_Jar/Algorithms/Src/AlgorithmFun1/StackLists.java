/* 
Author : Siddharth Nahar
Entry number : 2016csb1043
Use : Generic class with different lists to be implemented.
1.StackList

Declared as package will be used by futher code
Using inbuilt functionalities.
*/

package AlgorithmFun1;

import java.io.*;
import java.util.*;
import java.lang.*;

/*Implemented generic stack list using inbuilt
  It will be converted to jar file*/
public class StackLists<T extends Comparable<T> > implements Lists<T>{


     private Stack<T> stack;
     private Stack<T> stackMax;
      
      /* Default Constructor for array gives it default size as 0*/
     public StackLists(){ 
           stack = new Stack<T>();
           stackMax = new Stack<T>();
     }
     /*Returns size of the list*/
     public int sizeOfList(){
     
           return stack.size();
     }
     
      /*Adding an element to the list*/
    public  void pushElement(T element){
     
           stack.push(element);
           if(stackMax.size() > 0){
             if(element.compareTo(stackMax.peek()) >= 0)
               stackMax.push(element);
             else
               stackMax.push(stack.peek());
          }
          else
            stackMax.push(element);
     }
     
    /*Removing an Element from list gives exception message if list is empty*/  
    public  void popElement(){
     
           try{
             stack.pop();
             stackMax.pop();
           }catch(EmptyStackException e){
             System.out.println(e.getMessage());           
           
           }
     }
     /*  To override interface */
     public void popElement(int index){
     
           popElement();
     }
     
   /* Searches an element and return if is present or not*/  
    public boolean searchElement(T obj){
     
           if(stack.search(obj) != -1)
             return true;
             
           else
             return false; 
     }
     
     /* Return top element of list*/      
    public T top(){
          
           try{
               return stack.peek();
             
           }catch(EmptyStackException e){
             System.out.println(e.getMessage());           
              return null;
           }
    }
    /*Return max of stack for O(1)*/
    public T getMax(){
           
           try{
               return stackMax.peek();
             
           }catch(EmptyStackException e){
             System.out.println(e.getMessage());           
              return null;
           }
    
    }
}
