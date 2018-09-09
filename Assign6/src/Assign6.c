/*
 ============================================================================
 Name        : linearSearch.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
int linearSearch(int arr[SIZE]);
int main(void)
{
	int arr[SIZE];
	linearSearch(arr);
	return EXIT_SUCCESS;
}
int linearSearch(int a[SIZE])
{
		int no;
		int key;
		int i;
		int j;
		unsigned flag;
		printf("Enter Size of Array:\n");
		scanf("%d",&no);
		printf("Enter Elements\n");
		for(i=1;i<=no;i++)
		{
			scanf("%d",&a[i]);
		}
		/*printf("Elemets are:");

		for(i=0;i<=no;i++)
		{
			printf("Elements are %1d",a[i]);
		}*/

		printf("Enter Key to be found:\n");
			scanf("%d",&key);

			for(i=1;i<=no;i++)
		{
			for(j=0;j<=i;j++)
			{
			//printf("%d",key);

			if(a[i]==key)
			{
				flag=1;
				if(flag==1)
					{
						printf("\nElement found at %d index",i);
						break;
					}

			}
			}

		}
			if(flag<1)
				{
					printf("\nNULL");
				}
			return NULL;
}
