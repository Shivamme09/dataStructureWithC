/*
 ============================================================================
 Name        : arrayDelete.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void deleteArray(int arr[20]);
int main(void)
{

	int arr[20];
	deleteArray(arr);
	return EXIT_SUCCESS;
}
void deleteArray(int arr[20])
{
	int i,j,k;
	int no;
	printf("Enter Size of Elements\n");
	scanf("%d",&no);
	printf("\nEnter array elements: ");

	for(i = 0; i < no; i++)
	{
		scanf("%d", &arr[i]);
	}

	for(i=0;i<=no;i++)
	{
		for(j=i+1;j<no;)
		{
			if(arr[i]==arr[j])
		{
			for(k=j;k<=no;k++)
			{
				arr[k]=arr[k+1];
			}
			no--;
		}
			else
			{
				j++;
			}
		}
	}

	printf("After deleting elements:\n");
	for(i = 0; i < no; i++)
	{
		printf("%d ", arr[i]);
	}
	for(i = 0; i < no; i++)
		{
			printf("\n\nUnique Elements are %d \t", arr[i]);
		}
}
