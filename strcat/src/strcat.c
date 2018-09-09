/*
 ============================================================================
 Name        : strcat.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 40
char* mystrcat(char *d, const char *s);
int main(void)
{
		char src[SIZE];
		char dest[SIZE];
		char *ptr=NULL;
		printf("Enter Source\n");
		gets(src);
		printf("Enter Destination");
		gets(dest);
		ptr=mystrcat(dest,src);
		printf("After Evaluation %s",dest);
		printf("\n\tAfter Evaluation %s",src);
	return EXIT_SUCCESS;
}
char* mystrcat(char *d, const char *s)
{
	int i, j;
	for(i=0 ; *(d+i)!='\0'; i++); // goto end of d 	for(i=0;s[i]!=0;i++)

	for(j=0; *(s+j)!='\0'; j++) //goto end of s 	for(j=0;s[j]!=0;j++)
	{
		d[i+j]=s[j];	// d[i+j] =s[j];
	}
	*(d+i+j)='\0';	//d[i+j]='\0'
	return d;
}
