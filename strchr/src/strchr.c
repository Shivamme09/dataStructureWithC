/*
 ============================================================================
 Name        : strchr.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 40
char* mystrchr(const char *s,char find);
int main(void)
{
  char c[SIZE];
  char *ptr=NULL;
  printf("Enter String:\n");
  gets(c);
  char key;

  printf("Print key to be found\n");

  scanf("%c",&key);

  ptr=mystrchr(c,key);

  if(ptr==NULL)
	{
	  printf("\n Not Found");
	}
  else
	{
	  printf("Found at location %d\n",ptr-c);
	}
printf("%s",c);
	return EXIT_SUCCESS;
}
char* mystrchr(const char *s,char find)
{
 int i;
 for(i=0;s[i]!=0;i++)
 {
	 if(s[i]==find)
		 return &s[i];
 }
	 return NULL;
}
