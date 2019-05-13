/* 
Author : Siddharth Nahar
Entry number : 2016csb1043
Use : Generic class with different Search algorithm to be implemented.
1. Stack List
2. Array List

Using inbuilt functionalities.
*/


/*Use as package in different code
  Name same as directory name*/
  
package AlgorithmFun1;

import java.io.*;
import java.util.*;
import java.lang.*;


/*public interface will be used as interface for function names*/
public interface Lists<T extends Comparable<T> >{


     public void pushElement(T element);    //Add an object to list
     public void popElement();      //Remove from stack,Queue
     public void popElement(int index);     //Remove from particular index in array
     public int sizeOfList();
     public boolean searchElement(T obj);   //Searches for objects
     public T top();
     public T getMax();           //Returns Max of list
    // public int compareTo(T obj);
}


