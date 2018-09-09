/*
 ============================================================================
 Name        : display100.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int n=1;
void display();

int main(void)
{
	display(n);
	return EXIT_SUCCESS;
}
void display()
{
	//getchar();
	if(n>100)
		return;
	else
	{
		printf("\n%4d",n);
		n++;
		display();
	}
}
