/*
 ============================================================================
 Name        : strLen.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 40
void mystrlen(const char c);
int main(void)
{
	char c[SIZE];
	int counter;
	int i;
	printf("Enter String:\n");
	gets(c);

	for(i=0;c[i]!='\0';i++)
	{

	}
	printf("\nLength is %d",i);
	return EXIT_SUCCESS;
}
