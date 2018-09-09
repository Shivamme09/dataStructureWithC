/*
 ============================================================================
 Name        : 2dUsingFunc.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define ROW 2
#define COL 2

void readArray(int mat[ROW][COL]);

void printArray(int mat[ROW][COL]);

void additionArray(int mat1[ROW][COL],int mat2[ROW][COL],int res[ROW][COL]);

void multiArray(int mat1[ROW][COL],int mat2[ROW][COL],int res[ROW][COL]);
int main(void)
{
	int mat1[ROW][COL]={0};
	int mat2[ROW][COL]={0};
	int ans[ROW][COL]={0};
	printf("\nEnter first matrix");
	readArray(mat1);
	printf("\nEnter second matrix");
	readArray(mat2);

	printArray(mat1);
	printArray(mat2);

	//printf("\nAddition:");
	//additionArray(mat1,mat2,ans);
	printf("\n Multiplication");

	multiArray(mat1,mat2,ans);

	return EXIT_SUCCESS;
}
void readArray(int mat[ROW][COL])
{
		int i,j;
		for(i=0;i<ROW;i++)
		{
			for(j=0;j<COL;j++)
			{

				scanf("%d",&mat[i][j]);
			}
		}

}

void printArray(int mat[ROW][COL])
{
	int i,j;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("\n matrix[%d][%d] is: %d",i,j,mat[i][j]);
		}
	}
	printf("\n");
}
void additionArray(int mat1[ROW][COL],int mat2[ROW][COL],int res[ROW][COL])
{
	int i,j;
	for(i=0;i<ROW;i++)
		{
			for(j=0;j<COL;j++)
			{
				res[i][j]=mat1[i][j]+mat2[i][j];
				printf("\n matrix[%d][%d] is: %d",i,j,res[i][j]);
			}
		}
	return;
}
void multiArray(int mat1[ROW][COL],int mat2[ROW][COL],int res[ROW][COL])
{
	int i,j,k;
	for(i=0;i<ROW;i++)
		{
			for(j=0;j<COL;j++)
			{
				for(k=0;k<ROW;k++)
				{
					res[i][j]+=mat1[i][k]*mat2[k][j];
				}
				printf("\n matrix[%d][%d] is: %d",i,j,res[i][j]);
			}
		}
	return;
}
