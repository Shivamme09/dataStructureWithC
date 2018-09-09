/*
 ============================================================================
 Name        : pointer.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[5]={3,5,6,7,9};
	int *p=arr;
	int (*ptr)[5]=arr;
	printf("p=%u, ptr=%u arr=%u\n",p,ptr,arr);
	printf("p=%d, *ptr=%u\n",*p,**ptr);
	printf("%d",*ptr);
	return EXIT_SUCCESS;
}
