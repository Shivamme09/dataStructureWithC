/*
 ============================================================================
 Name        : quickSort.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SWAP(a,b){int t=b;b=a;a=b;}
#define SIZE 6
int quickSort(int *arr,int left,int right);
int main(void)
{
	int arr1[SIZE]={30,55,40,15,5,2};
	quickSort(arr1,0,SIZE-1);
	return EXIT_SUCCESS;
}
int quickSort(int *arr,int left,int right)
{
	int i,j;
	left=0;
	right=SIZE-1;
	if(left>=right)
		return 1;
	while(i<j)
	{
		while(i<=right && arr[i]<=arr[left])
		{

			i++;
		}
		while(arr[j]>arr[left])
		{
			j--;
		}
		if(i<j)
		{
			SWAP(arr[i],arr[j]);
		}
	}
	SWAP(arr[left],arr[j]);
	quickSort(arr,left,j-1);
	quickSort(arr,j+1,right);
	for(i=0;i<SIZE;i++)
	{
		printf("\nELEMENTS are %d ->",arr[i]);
	}
}
