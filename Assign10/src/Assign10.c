/*
 ============================================================================
 Name        : struct.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N (2)
struct student
{
	char name[20];
	int rollno;
	int marks;
};

struct student stu[N];
void print(struct student stu[N]);
void read(struct student stu[N]);
void sort_rollno(struct student stu[N]);
void sort_name(struct student stu[N]);
int menuoperations();
int main(void) {
	int choice;
	do{
		 choice=menuoperations();
		switch (choice) {
			case 1:
				read(stu);
				break;
			case 2:
				print(stu);
				break;
			case 3:
				sort_rollno(stu);
				print(stu);
				break;
			case 4:
				sort_name(stu);
				print(stu);
				break;
			default:
				printf("you entered a wrong value");
				continue;
		}
		printf("\n enter 1 to continue or 0 to exit");
		scanf("%d",&choice);
		}while(choice!=0);


	return EXIT_SUCCESS;
}
void read(struct student stua[N])
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("enter the name :");
		scanf("%s",stua[i].name);
		printf("enter the roll no:");
		scanf("%d",&stua[i].rollno);
		printf("enter the marks :");
		scanf("%d",&stua[i].marks);
}
}
void print(struct student stua[N])
{
	int i;

	for(i=0;i<N;i++)
	{
		printf("\nthe name of %d student is  %s.",i+1,stua[i].name);
		printf("\nthe roll no of %d student is %d .",i+1,stua[i].rollno);
		printf("\nthe marks of the  %d student is %d",i+1,stua[i].marks);
	}
}
void sort_name(struct student stua[N])
{
	struct student temp;
	int i,j;
	for(i=0;i<N-1;i++)
	{
		for(j=1;j<N;j++)
		{
			if(strcmp(stua[i].name,stua[i+1].name))
			{
				temp=stua[i];
				stua[i]=stua[i+1];
				stua[i+1]=temp;
			}
		}
	}
}
void sort_rollno(struct student stua[N])
{
	struct student temp;
	int i,j;
	for(i=0;i<N-1;i++)
	{
		for(j=1;j<N;j++)
		{
			if(stua[i].rollno>stua[i+1].rollno)
			{
				temp=stua[i];
				stua[i]=stua[i+1];
				stua[i+1]=temp;
			}
		}
	}
}
int menuoperations()
{
	int choice;
	printf("\nenter 1 for read the structure :");
	printf("\nenter 2 print for structure :");
	printf("\nenter 3 for sort by rollno :");
	printf("\nenter 4 for sort by name");

	printf("\nenter your choice");
	scanf("%d",&choice);
	return choice;
}
