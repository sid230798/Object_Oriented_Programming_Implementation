/* 
Author : Siddharth Nahar
Entry number : 2016csb1043
Use : Matrix class interface specifing interface
*/

package AlgorithmFun2;

import java.io.*;
import java.util.*;
import java.lang.*;

/*Public interface for simple Matrix operation*/
public interface MatrixInterface{

       public void matInit();  //Returns mat obj after initialization
       public Matrix matMultiply(Matrix obj) throws Exception;  //Matrix multiplication
       public double Determinant() throws Exception;    //Returns Determinant of matrix
       public void Display();    //Displaying contents of matrix
}
