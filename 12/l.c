//WAP to read and print two different arrays.

/*
    * Initially, two strings are declared.
    * The first and second String is accepted.
    * The two Strings are printed.
*/

#include<stdio.h>
int main()
{
  //Declaring the two Strings
  char s1[5000];
  char s2[5000];

  //Accepting the two Strings
  printf("Enter the first String: ");
  gets(s1);
  printf("Enter the second String: ");
  gets(s2);

  //printing the two Strings
  printf("First String: %s\n", s1);
  printf("Second String: %s\n", s2);
}


/*    Variable List
 	* char s1[]              -->		to store the first String
	* char s2[]              -->		to store the second String
*/

/*    Output
    *  Enter the first String: My name is
    * Enter the second String: Aksh Desai
    * First String: My name is
    * Second String: Aksh Desai
*/