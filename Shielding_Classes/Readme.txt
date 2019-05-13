------------------------------------------------------------------
Author : Siddharth Nahar
Entry no : 2016csb1043
Use : Readme for Compilation details
------------------------------------------------------------------

Jar files for Compilation of Test Cases is in jar folder

cd CSL202_2016csb1043_2

For Compilation:

(For Algorithm 1)
~/CSL202_2016csb1043_2$ javac -d . -cp jar/Algorithms.jar:jar/Shield.jar TestCases/Test1.java 
~/CSL202_2016csb1043_2$ java -cp .:jar/Algorithms.jar:jar/Shield.jar Test1


(For Test of Algorithm 2)
~/CSL202_2016csb1043_Assignment2$ javac -d . -cp jar/Algorithms.jar:jar/Shield.jar TestCases/Test2.java 
~/CSL202_2016csb1043_Assignment2$ java -cp .:jar/Algorithms.jar:jar/Shield.jar Test2

--------------------------------------------------------------------

*To maintain directory structure please use above commands
*Source files for Algorithms and Shielding codes are in SrcFiles_Jar

-------------------------------------------------------------------------

For manipulation in Test 1 :

Shield1 class as abstract interface
getObjList("Array",int) -------> Returns ArrayList obj with specfied size
getObjList("Array") or getObjList("Stack") ------------------> Returns ArrayList or Stack empty list


------------------------------------------------------------------------

for manipulation in Test 2 :
 
Shield2 class as abstract interface
getObjList(int,int) ---------------> Returns Matrix object with specified dimension
getObjList("Square",int) or getObjList("Identity",int)          -----------------> Returns Square or Identity of specified Dimension
