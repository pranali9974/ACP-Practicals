//WAP to show the use of predefined macros in c.

#include<stdio.h>  

int main(void){	 
	printf("The file name is :%s\n", __FILE__ );
	printf("The date is :%s\n", __DATE__ );
	printf("The time :%s\n", __TIME__ );
}

 /*    Output
	* The file name is :b.c
	* The date is :May 31 2021
	* The time :05:50:27
*/