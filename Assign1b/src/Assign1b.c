/*
 ============================================================================
 Name        : assignmentSumOfDIgits.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long no;
	int rem;
	int rev;
	int temp,sum;
	temp=no;
	printf("Enter Number");
	scanf("%ld",&no);
	printf("The number is %ld",no);
	while(no!=0)
	{
		rem=no%10;
		rev=rev*10+rem;

		no/=10;
	}printf("\n \t The reversed Number is %d",rev);
	return EXIT_SUCCESS;
}
