/*
 ============================================================================
 Name        : leapYear.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void leapYear(int year,int month,int day);

int main(void)
{
	int year;
	int day,month;
	leapYear(year,month,day);
	return EXIT_SUCCESS;
}
void leapYear(int y,int m,int d)
{

	printf("Enter Date in dd:mm:yy format:\n");
		scanf("%d%d%d",&d,&m,&y);

		if(y%4==0 && y%100!=0 || y%400==0)
		{
			printf("%d  is Leap Year.",y);
			if(m==2)
			{
				printf("\nThis month has 29 days.");

			}
			else if(m==1||m==3||m==7||m==8||m==10||m==12)
			{
				printf("\nThis month has 31 days.");
			}
			else
			{
				printf("\nThis month has 30 days.");
			}
		}
		else if((y%4!=0 && y%100==0 || y%400!=0)&& m==2)
		{
			printf("\nThe year is not a leap year");

			printf("\nThe number of days is 28");

		}
		else
		{
			printf("\nThe Year is Not a leap year");
		}
}
