/*
 ============================================================================
 Name        : fileHandlingAssign11.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N (2)
#pragma pack(1)
struct student
{
	int rollno;
	char name[20];
	int marks;
};
struct student s1[N];
void readData();
void printData();
void copy();
int main(void)
{

	 printData();
	 readData();
	 copy();
	return EXIT_SUCCESS;
}
void printData()
{
	FILE *fpWrite=NULL;
	char ch;
	int i;
	fpWrite=fopen("file1.txt","w");
	if (fpWrite==NULL)

		{
			printf("\n Unable to create file in write mode");
		}
		else
		{
			printf("\nEnter the detail of Students");
				for(i=0;i<N;i++)
				{

					printf("\nEnter roll no: ");
					scanf("%d", &s1[i].rollno);
					printf("\nEnter name: ");
					scanf("%s", s1[i].name);
					printf("\nEnter marks: ");
					scanf("%d", &s1[i].marks);
				}
		for(i=0;i<N;i++)
	{
		fprintf(fpWrite,"\n student rollno is %d %s %d", s1[i].rollno, s1[i].name, s1[i].marks);
	}}
	fclose(fpWrite);
}
void readData()
{
	FILE *fpRead=NULL;
	char ch;
	fpRead=fopen("file2.txt","r");
	if (fpRead==NULL)

		{
			printf("\n Unable to create file in read mode");
		}
		else
		{
		while((ch=fgetc(fpRead))!=EOF)
		{
			printf("%c",ch);
		}
		}
	fclose(fpRead);
}
void copy()
{
	FILE *fpRead;
	FILE *fpWrite;
	int c;
	fpRead= fopen("file1.txt", "r");
	if (fpRead == NULL)
	{
		printf("Cannot open file %s \n", "file2.txt");
		exit(0);
	}
	fpWrite = fopen("file2.txt","w");
	if (fpWrite == NULL)
	{
		printf("Cannot open file %s \n","file1.txt");
		exit(0);
	}
	c=fgetc(fpRead);
	while(c!=EOF)
	{
		fputc(c,fpWrite);
		c=fgetc(fpRead);
	}
	printf("\nContents copied to %s", "file2.txt");

		    fclose(fpRead);
		    fclose(fpWrite);
		    return;
}
