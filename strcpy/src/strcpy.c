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
char* mystrcpy(char *d, const char *s);
int main(void)
{
	char src[SIZE];
	char dest[SIZE];
	char *ptr=NULL;
	printf("Enter Source\n");
	gets(src);
	printf("Enter Destination");
	gets(dest);
	ptr=mystrcpy(dest,src);
	printf("After Evaluation %s",dest);
	printf("\n\tAfter Evaluation %s",src);
	return EXIT_SUCCESS;
}
char* mystrcpy(char *d, const char *s)
{
	int i;
	for(i=0; s[i]!='\0'; i++)
	{
		d[i]=s[i];
	}
	d[i]='\0';
	return d;
}
