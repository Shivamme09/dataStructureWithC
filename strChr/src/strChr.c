/*
 ============================================================================
 Name        : strChr.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 40
int main(void)
{
	char c[]="shivam";
	int i,j;
	char key;
	//printf("Enter Value:\n");
	//gets(c);
	printf("Enter Key\n");
	//getchar();
	gets(key);

	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]!=key)
		{
			printf(" NotFound");
		}
		else
		{
			printf("Found");
		}

	}
	return EXIT_SUCCESS;
}
