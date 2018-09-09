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

struct student
{
	char name[20];
	int rollno;
	int marks;
};


int main(void) {
	int N=3;
struct student stu[N];
int i;
for(i=0;i<N;i++)
{
	printf("enter the name :");
	scanf("%s",stu[i].name);
	printf("enter the roll no:");
	scanf("%d",&stu[i].rollno);
	printf("enter the marks :");
	scanf("%d",&stu[i].marks);

}
for(i=0;i<N;i++)
{
	printf("the name of %d student is  %s.",i+1,stu[i].name);
	printf("\nthe roll no of %d student is %d .",i+1,stu[i].rollno);
	printf("\nthe marks of the  %d student is %d",i+1,stu[i].marks);
}
	return EXIT_SUCCESS;
}
