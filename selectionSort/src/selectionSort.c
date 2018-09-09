/*
 ============================================================================
 Name        : selectionSort.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y) { x = x + y; y = x - y; x = x - y;}
#define SIZE 6
void selectionSort(int arr[SIZE]);
int main(void)
{
	int arr1[SIZE];
	int i;
	printf("Enter Elements:\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Elements before Sorting\n");
	for(i=0;i<SIZE;i++)
	{
		printf("Elements are %d:\n",arr1[i]);
	}

	selectionSort(arr1);
	return EXIT_SUCCESS;
}
void selectionSort(int arr[SIZE])
{
	int i,j;
	for(i=0;i<SIZE;i++)
	{
		for(j=i;j<SIZE;j++)
		{
			if(arr[j]<arr[i])
			{
				SWAP(arr[j],arr[i]);
			}
		}
		printf("\nArray becomes %d",arr[i]);
	}
}
