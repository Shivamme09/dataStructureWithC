/*
 ============================================================================
 Name        : 2dArray.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3
int main(void)
{
	int mat[ROW][COL];
	int i,j;
	printf("Enter Elements");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{

			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("\nmatrix[%d][%d] is: %d",i,j,mat[i][j]);
		}
	}printf("\n");
	return EXIT_SUCCESS;
}
