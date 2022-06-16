// Description: write a program to swap data using strings

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
   
/* Swaps strings by swapping data*/
void swap(char *str1, char *str2)
{
  char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);
  free(temp);
}  
int main()
{
  char str1[10] ="Rizwana";
  char str2[10] ="Shaik";
  swap(str1, str2);
  printf("str1 is %s, str2 is %s", str1, str2);
  //getchar();
  return 0;
}
