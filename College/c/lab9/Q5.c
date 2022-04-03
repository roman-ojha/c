/*write a c program to accept a string and delete all vowels from a string.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
  int main()
{
  char str[30],str1[30],c;
  int i,count=0;
  printf("\nEnter any string: ");
  gets(str);
  for(i=0;i<strlen(str);i++)
{
  c=str[i];
  if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u')
{
  str1[count++]=str[i];
}
}
  str1[count]='\0';
  printf("\nYou entered string is: %s",str);
  printf("\nString without vowels is: %s",str1);
  return 0;
}
