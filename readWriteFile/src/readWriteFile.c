/*
 ============================================================================
 Name        : readWriteFile.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 2
#pragma pack(1)
struct student
{
	int rollno;
	char name[10];
	int marks;
};
void readStruct();
void printStruct();
struct student s1[N];
int main(void)
{

	printf("Students details are....\n");
	readStruct();
	printStruct();
	return EXIT_SUCCESS;
}
void readStruct()
{
	int i;
		for(i=0;i<N;i++)
		{
			printf("Enter Roll No:\n");
			scanf("%d",&s1[i].rollno);
			printf("Enter Student Name:\n");
			scanf("%s",s1[i].name);
			//getchar();
			printf("Enter student marks\n");
			scanf("%d",&s1[i].marks);
		}

}
void printStruct()
{
	int i;
	for(i=0;i<N;i++)
		{
			printf("Details of student %d is..\n",i);
			printf("%d %s %d\n",s1[i].rollno,s1[i].name,s1[i].marks);

		}
}
