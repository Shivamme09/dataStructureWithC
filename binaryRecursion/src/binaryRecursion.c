/*
 ============================================================================
 Name        : binaryRecursion.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void linear(int *arr);
int main(void)
{
	int arr1[SIZE];
	linear(arr1);
	return EXIT_SUCCESS;
}
void linear(int *arr)
{
	int i;
	int flag;
	int key;
	printf("Enter Values");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\nOriginal Array is");

	for(i=0;i<SIZE;i++)
		{
			printf("\nOriginal Array is:%d",arr[i]);
		}

	printf("\n Enter Key:");
	scanf("%d",&key);
	for(i=0;i<SIZE && key>=arr[i];i++)
	{
		if(key==arr[i])
		{
			flag=1;
		}
		if(flag==1)
			{
				printf("\n %d Found at %d position",key,i);
				break;
			}
	}
	printf("\nValue of i is %d",i);
	if(flag!=1)
	{
		printf("\n Not Found");
	}
}
