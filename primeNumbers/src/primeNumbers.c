/*
 ============================================================================
 Name        : primeNumbers.c
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
	int n,i,j;
	int counter;
	printf("Enter Number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	counter=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
				{
					counter++;
					break;
				}
		}

		if(counter==0 && i!=1)
		{
			printf(" \nPrime Numbers are %d",i);
		}

	}
	return EXIT_SUCCESS;
}
