/*
 ============================================================================
 Name        : sumFirstOdd.c
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
	int n;
	int sum=0;
	int i;
	printf("Enter The value of n\n");
	scanf("%d",&n);
	for(i=1;i<=2*n;i++)
	{
		if(i%2!=0)
		{
			printf("%3d",i);
			sum=sum+i;
		}
	}
	printf("\n answer is %d",sum);
	return EXIT_SUCCESS;
}
