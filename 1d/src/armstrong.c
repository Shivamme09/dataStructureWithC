/*
 ============================================================================
 Name        : amrmstrong.c
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
	int no;
	int ones,twos,twos1,tens,hund;
	printf("Enter Number\n");
	scanf("%d",&no);
	ones=no%10;
	twos1=no/10;
	tens=twos1%10;
	hund=no/100;
	if(((ones*ones*ones)+(tens*tens*tens)+(hund*hund*hund))==no)
	{
		printf("The Number is Armstrong\n");
	}
	else
		printf("The Number is not Armstrong\n");
	return EXIT_SUCCESS;
}
