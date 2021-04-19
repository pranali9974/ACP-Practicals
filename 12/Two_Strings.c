#include<stdio.h>
int main()
{
  int n1, n2;

  printf("Enter length of first String.\n");
  scanf("%d", &n1);n1++;
  printf("Enter length of second String.\n");
  scanf("%d", &n2);n2++;
  
  char s1[n1], s2[n2];
  
  printf("Enter the first String: ");
  gets(s1);
  printf("Enter the second String: ");
  gets(s2);

  printf("First String: %s\n", s1);
  printf("Second String: %s\n", s2);
}