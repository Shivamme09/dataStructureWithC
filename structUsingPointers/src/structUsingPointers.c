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
void readStruct(struct student *p);
void printStruct(const struct student *p);

int main(void)
{
	struct student s1[N];
	printf("Students details are....\n");
	readStruct(&s1);
	printStruct(&s1);
	return EXIT_SUCCESS;
}
void readStruct(struct student *p)
{
	int i;
	for(i=1;i<=N;i++)
			{

			printf("Enter Roll No:\n");

			scanf("%d",&p[i].rollno);
			printf("Enter Student Name:\n");
			scanf("%s",p[i].name);
			//getchar();
			printf("Enter student marks\n");
			scanf("%d",&p[i].marks);
			}

}
void printStruct(const struct student *p)
{
	int i;
	for(i=1;i<=N;i++)
		{
			printf("Details of student %d is..\n",i);
			printf("%d %s %d\n",p[i].rollno,p[i].name,p[i].marks);

		}
}
