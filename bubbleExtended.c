/*
 ============================================================================
 Name        : bubbleExtended.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
#define SWAP(a,b) { int t = a ; a = b ; b = t; }
void bubble(int *arr1);
int main(void)
{
	int arr1[SIZE]={10,50,30,20,40};
	bubble(arr1);
	return EXIT_SUCCESS;
}
void bubble(int *arr)
{
	int i,j;
	int flag=1;
	for(i=0;i<SIZE-1 && flag==1;i++)
	{
		flag=0;
		for(j=0;j<SIZE-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				SWAP(arr[j],arr[j+1]);
				flag=1;
			}
		}
	}
	for(i=0;i<SIZE;i++)
	{
		printf("\nElements are %d",arr[i]);
	}
}
