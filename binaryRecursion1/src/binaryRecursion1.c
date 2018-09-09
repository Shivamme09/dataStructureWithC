/*
 ============================================================================
 Name        : binaryRecursion1.c
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
int binaryRec(int arr[SIZE],int left,int right,int key);

int main(void)
{
	int arr1[SIZE];
	int n;
	int i;
	printf("Enter Elements\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<SIZE;i++)
	{
		printf("Elements are %d:\n",arr1[i]);
	}
	printf("Enter Key to be Searched");
	scanf("%d",&n);

	int result = binaryRec(arr1, 0, SIZE-1, n);
(result == 1)? printf("Element is present at index %d",result):printf("Element is not present in array");
	return EXIT_SUCCESS;
}
int binaryRec(int arr[SIZE],int left,int right,int key)
{
	int mid;
	if(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		if(key<arr[mid])
		{

			return binaryRec(arr,left,mid-1,key);
		}
		else
			return binaryRec(arr,mid+1,right,key);
	}
}
