/*
 ============================================================================
 Name        : linearUsingPointer.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void linear(int *arr[SIZE]); //here we declare that arr is a pointer of SIZE 5
int main(void)
{

	int array[SIZE];
	linear(array);
	return EXIT_SUCCESS;
}
void linear(int *arr[SIZE])
{
	int i;
	int key;
	int no;
	int flag;
	printf("Enter no of elements");
	scanf("%d",&no);
	printf("\n Enter Elements of array:\n");

	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Original Elements are :\n");
	for(i=0;i<SIZE && key>=arr[i];i++)
		{
			if(key==arr[i])
			{
				flag=1;
			}
			if(flag==1)
			{
				printf("\n%d is found at %d location\n",key,i);
				break;
			}
		}
	if(flag<0)
	{
		printf("\n Not Found");
	}
}
