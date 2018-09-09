/*
 ============================================================================
 Name        : GCD.c
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
	int n1,n2;
	int rem;
	int temp;
	printf("Enter The Numbers");
	scanf("%d",&n1);
	scanf("%d",&n2);
	do
	{
		rem=n1%n2;
		if(rem>0)
		{

			//temp=rem;
			n1=n2;
			n2=rem;
		}
		else
		{
			printf("The GCD is %d",n2);
		}
	}while(rem!=0);
	return EXIT_SUCCESS;
}
