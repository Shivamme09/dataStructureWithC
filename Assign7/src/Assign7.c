/*
 ============================================================================
 Name        : strRemove.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
int main(void)
{
	int i,k;
	char name[SIZE];
	char key;
	int len;
	printf("\nEnter the String:");
	scanf("%s",&name);
	len=strlen(name);
	printf("\nEnter Key");
	getchar();
	scanf("%c",&key);

	for(i=0;i<len;i++)
	{

			if(name[i]==key)
			{

				for(k=i;k<len;k++)
				{

					name[k]=name[k+1];

				}
			len--;
			i--;
			}



	}
	printf("\nString becomes %s",name);
	return EXIT_SUCCESS;
}
