/*
 ============================================================================
 Name        : binarySearchIterative.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
#define TRUE 1
#define FALSE 0
typedef int boolean;
boolean binary(int *arr,int key);

int main(void)
{
	int i;
	int arr1[SIZE];
	printf("Enter the Values\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Elements Are:\n");
	for(i=0;i<SIZE;i++)
		{
			printf("\n%d",arr1[i]);
		}
    int key;
    printf("\nEnter Key");
    scanf("%d",&key);
	if(binary(arr1,key))
		printf("Element found");
	else
		printf("Not Found");
	return EXIT_SUCCESS;
}
boolean binary(int *arr,int key)
{
	int left,right,mid;

	left=0;
	right=SIZE-1;

	while(left<=right)
	{
		int mid=(left+right)/2;
		if(key==arr[mid])
			{
				printf("Element found at %d location\n",arr[mid]);
				return TRUE;
			}
		if(key>arr[mid])
			left=mid+1;

		else
			right=mid-1;
	}
	return FALSE;
}
