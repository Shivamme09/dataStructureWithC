/*
 ============================================================================
 Name        : fibonacci.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fibRec(int n);
int main(void)
{
	int n;
	int i=0;
	int count;
	printf("Enter Limit\n");
	scanf("%d",&n);
	printf("Fibbonacci Series is.....\n");
	for(count=0;count<=n+1;count++)
	{
		printf("%d\t",fibRec(i));
		i++;
	}
		return EXIT_SUCCESS;
}
int fibRec(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
	else
	{
		return (fibRec(n-1)+fibRec(n-2));
	}
}
