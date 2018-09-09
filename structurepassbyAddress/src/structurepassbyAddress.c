/*
 ============================================================================
 Name        : structurepassbyAddress.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct emp
{
	int empid;
	char name[40];
	float salary;
};
struct emp e2;
void readStruct();
void printStruct();
int main(void)
{

	printf("Enter How many Employees Details you want to enter:\n");
	//scanf("%d",&no);
	readStruct();
	printStruct();
	return EXIT_SUCCESS;
}
/*void readStruct(struct emp *p)
{
	struct emp e1;
	scanf("%d",&e1.empid);
	scanf("%s",&e1.name);
	scanf("%f",&e1.salary);
}
void printStruct(struct emp *p)
{
	struct emp e1;
	printf("\nId id %d",e1.empid);
	printf("\nName id %s",e1.name);
	printf("\nSalary id %f",e1.salary);
}
*/
void readStruct()
{
	struct emp e1;
	scanf("%d",&e1.empid);
	scanf("%s",&e1.name);
	scanf("%f",&e1.salary);
}
