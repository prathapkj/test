
C
 
C#
 
Java
 
Python
 
SQL
 
MySQL
 
Js
 
BI Tools
Informatica
 
Talend
 
Tableau
 
Power BI
 
SSIS
 
SSRS
 
SSAS
 
MDX
 
R Tutorial
 
Alteryx
 
QlikView
 
More
C Programs
 
C++ Programs
 
Go Programs
 
Python Programs
 
Java Programs
C program to Reverse a String
How to write a C program to Reverse a String without using the strrev function with an example?. To demonstrate the reverse a string in c programming, we are going to use For Loop, While Loop, Functions, and Pointers.


 
C program to Reverse a String Example 1
This reverse a string in c program allows the user to enter any string or character array. Next, it will use For Loop to iterate each character in that string, and save the characters in reverse order.

/* C program to Reverse a String without using strrev() */
 
#include <stdio.h>
#include <string.h>
 
void rev()
{
  	char Str[100], RevStr[100];
  	int i, j, len;
 
  	printf("\n Please Enter any String :  ");
  	gets(Str);
  	
  	j = 0;
  	len = strlen(Str);
 
  	for (i = len - 1; i >= 0; i--)
  	{
  		RevStr[j++] = Str[i];
  	}
  	RevStr[i] = '\0';
 
  	printf("\n String after Reversing = %s", RevStr);
  	
  //	return 0;
}
