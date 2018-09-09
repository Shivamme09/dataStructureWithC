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
void fibo(int length);
int main(void)
{

	int length;
	printf("Enter the terms till you want:\n");
	scanf("%d",&length);
	fibo(length);
		return EXIT_SUCCESS;
}
void fibo(int l)
{
		int n1=0;
		int n2=1;
		int i;
		int sum;
		printf("\nFibbonacci Series is....\n %d \t%d\t \n",n1,n2);
		for(i=0;i<=l-1;i++)
		{

			sum = n1+n2;

			n1=n2;
			n2=sum;
			printf(" %d\t",sum);
		}
		printf("\nNth term is %d\t",sum);

}
