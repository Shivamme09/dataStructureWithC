/*
 ============================================================================
 Name        : linearRecursion.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
#define TRUE 1
#define FALSE 0
typedef int bool_t;

int linearRec(int *arr,int index,int key);
int main(void)
{
	int arr1[SIZE];
	int key1;
	int i;
	printf("\nEnter Elements");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\nOriginal Elements are:");
		for(i=0;i<SIZE;i++)
		{
			printf("%d\n",arr1[i]);
		}
	printf("\nEnter Key");
	scanf("%d",&key1);
	linearRec(arr1,0,key1);
	return EXIT_SUCCESS;
}
int linearRec(int *arr,int index,int key)
{
	if(index==SIZE)
	{
		printf("\nNot Found");
		return FALSE;

	}
	if(key==arr[index])
	{
		printf("\nFound at index %d",index+1);
		return TRUE;
	}
	return (linearRec(arr,index+1,key));
}
