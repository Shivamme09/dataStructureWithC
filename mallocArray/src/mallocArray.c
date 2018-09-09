/*
 ============================================================================
 Name        : mallocArray.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	int *ptr;
	int no;
	int i;
	printf("Enter How Many Elements You want to enter");
	scanf("%d",&no);
	ptr=(int*)malloc(sizeof(int)*no);

	if(ptr==NULL)
	{
		printf("Could Not locate Memory");
	}
	printf("Enter Elements");
	for(i=0;i<no;i++)
	{
		scanf("%d",ptr[i]);

	}

	for(i=0;i<no;i++)
	{
		printf("\n %d",ptr[i]);
	}
	free(ptr);
	ptr=NULL;
	printf("\nMemory is Freed");
	return EXIT_SUCCESS;
}
