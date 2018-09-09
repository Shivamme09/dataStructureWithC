#include <stdio.h>
#pragma pack(1) //
struct emp
{
	int empno;
	char name[10];
	float sal;

};
void AcceptEmpInfo(struct emp *e);
void PrintEmpInfo( struct emp e);
void WriteEmpDataIntoFile();
void ReadEmpDataFromFile();
int main()
{

	WriteEmpDataIntoFile();
	ReadEmpDataFromFile();
	return 0;
}
void ReadEmpDataFromFile()
{
	FILE * fpRead= NULL;
	int counter=0;
	struct emp e1;
	//fpWrite= fopen("emp.txt", "w");
	fpRead= fopen("emp.txt", "r");
	if (fpRead==NULL)
		printf("\n Unable to create file in write mode");
	else
	{
		// Read only 1 st record
		//printf("\n EmpNo   Name  \tSal \n");
		//fscanf(fpRead,"\n %d %s %f",&e1.empno, e1.name, &e1.sal);
		//PrintEmpInfo(e1);
		//printf("\n record read from file");
		//fclose(fpRead);

		// read all records
		printf("\n EmpNo   Name  \tSal \n");
		while(fscanf(fpRead,"\n %d %s %f",&e1.empno, e1.name, &e1.sal)!=EOF)
		{
				PrintEmpInfo(e1);
				counter++;
		}
		printf("\n %d records read from file", counter);
		fclose(fpRead);


	}

}
void WriteEmpDataIntoFile()
{
	FILE * fpWrite= NULL;
	struct emp e1;
	//fpWrite= fopen("emp.txt", "w");
	fpWrite= fopen("emp.txt", "a");
	if (fpWrite==NULL)
		printf("\n Unable to create file in write mode");
	else
	{
		AcceptEmpInfo(&e1);
		fprintf(fpWrite,"\n %d %s %f",e1.empno, e1.name, e1.sal);
		printf("\n record is added to file");
		fclose(fpWrite);
	}
	return;
}
void AcceptEmpInfo(struct emp *e)
{
	printf("\n Enter empno :: ");
	scanf("%d", &e->empno);
	printf("\n Enter empno :: ");
	scanf("%s", e->name);
	printf("\n Enter emp sal :: ");
	scanf("%f", &e->sal);
	return;
}
void PrintEmpInfo(struct emp e)
{
	printf("%-8d %-10s %-6.2f\n",e.empno, e.name, e.sal);
	return;
}
