/*
 ============================================================================
 Name        : assignmentSumOfDIgits.c
 Author      : Shivam Choubey(25466)
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
		//rev=rev*10+rem;
		sum+=rem;
		no/=10;
	}printf("\nSum of Numbers are %d",sum);
	return EXIT_SUCCESS;
}
