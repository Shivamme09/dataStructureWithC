/*
 ============================================================================
 Name        : sortStructure.c
 Author      : Shivam Choubey(25466)
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
	char name[10];
	int marks;

};
struct student stu[N];
void ReadFromStuFile();
void ReadStuDataFromFile();
void copy();
int main()
{


		ReadStuDataFromFile();
		ReadFromStuFile();
		copy();
	return EXIT_SUCCESS;
}
void ReadStuDataFromFile()
{
	FILE * fpWrite= NULL;
	//int counter=0;

	int i;
	fpWrite= fopen("stu.txt", "w");

	if (fpWrite==NULL)
			printf("\n Unable to create file in write mode");
	else
	{
		printf("Enter the detail of Students");
		for(i=0;i<N;i++)
		{

	        printf("Enter roll no: ");
	        scanf("%d", &stu[i].rollno);
	        printf("Enter name: ");
	        scanf("%s", stu[i].name);
	        printf("Enter marks: ");
	        scanf("%d", &stu[i].marks);
		}
		for(i=0;i<N;i++)
		{
			fprintf(fpWrite, "\n student rollno is %d %s %d", stu[i].rollno, stu[i].name, stu[i].marks);

	}}
	fclose(fpWrite);
}
 void ReadFromStuFile()
{
		FILE * fpRead= NULL;



		char ch;
		fpRead= fopen("stu.txt", "r");

		if (fpRead==NULL)
				printf("\n Unable to create file in write mode");
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
	FILE *fpRead, *fpWrite;
	    int c;

	    fpRead= fopen("stu.txt", "r");
	    if (fpRead == NULL)
	    {
	        printf("Cannot open file %s \n", "stu.txt");
	        exit(0);
	    }
	    fpWrite = fopen("stu1.txt", "w");
	    if (fpWrite == NULL)
	    {
	        printf("Cannot open file %s \n","stu1.txt");
	        exit(0);
	    }
	    c = fgetc(fpRead);
	    while (c != EOF)
	    {
	        fputc(c, fpWrite);
	        c = fgetc(fpRead);
	    }

	    printf("\nContents copied to %s", "stu1.txt");

	    fclose(fpRead);
	    fclose(fpWrite);
	    return;
	}
