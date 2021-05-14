#include<stdio.h>
int main()
{
  char s1[5];
  char s2[5];
  
  printf("Enter the first String: ");
  gets(s1);
  printf("Enter the second String: ");
  gets(s2);

  printf("First String: %s\n", s1);
  printf("Second String: %s\n", s2);
}