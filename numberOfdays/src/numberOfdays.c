/*
 ============================================================================
 Name        : numberOfdays.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int menu();
int main(void)
{
	//char arr[20]={'jan',1,'mar','april','may','june','july',
	//'aug','sept','oct','nov','dec'};
	int arr[20]={0,1,2,3,4,5,6,7,8,9,10,11,12};
	int j;
	j=menu();
	if(j==arr[1])
	{
		printf("You entered feb and days are 28");
	}
	else if(j==arr[0]||j==arr[2]||j==arr[6]||j==arr[7]||j==arr[9]||j==arr[11])
	{
		printf("The month You Entered Have 31 days");
	}
	else
		printf("The month You Entered Have 30 days\n");
	return EXIT_SUCCESS;
}
int menu()
{
	int choice;
	printf("enter the month no \n:0.jan\n1.feb\n2.mar\n3.april\n4.may\n5.june\n6.july\n7.aug\n8.sept\n9.oct\n10.nov\n11.dec");
	scanf("%d",&choice);
	return choice;
}
