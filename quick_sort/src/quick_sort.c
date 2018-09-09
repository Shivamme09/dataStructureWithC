/*
 ============================================================================
 Name        : quick_sort.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
#define SWAP(a,b) {int t=b;b=a;a=t;}
int quick_sort(int *arr,int left,int right);
int left=0;
int right=SIZE-1;

int main(void)
{
	int arr1[SIZE]={85,24,68,7,55,77};
	quick_sort(arr1,0,SIZE-1);
	return EXIT_SUCCESS;
}
int quick_sort(int *arr,int left,int right)
{

	int i,j;
	if(left>=right)
	{
		return 1;
	}
	while(i<j)
	{
		while(i<=right && arr[i]<=arr[left])
			i++;

		while(arr[j]>arr[left])
			j--;
		if(i<j)
			SWAP(arr[i],arr[j]);
	}
	SWAP(arr[left],arr[j]);
	quick_sort(arr,left,j-1);
	quick_sort(arr,j+1,SIZE-1);
}
