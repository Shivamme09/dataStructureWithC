/*
 ============================================================================
 Name        : insertionSort1.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
void insertion(int *arr);
int main(void)
{
	int arr1[SIZE]={50,40,8,9,78,55};
	insertion(arr1);
	return EXIT_SUCCESS;
}
void insertion(int *arr)
{
	int i,j;
	int key;
	for(i=1;i<SIZE;i++)
	{
		j=i-1;
		key=arr[i];
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	for(i=0;i<SIZE;i++)
	{
		printf("\nElements are %3d",arr[i]);
	}
}
