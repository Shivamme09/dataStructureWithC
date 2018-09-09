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

	fpRead= fopen("emp.out", "rb");
	if (fpRead==NULL)
		printf("\n Unable to create file in read mode");
	else
	{
		// Read only 1 st record

		/*printf("\n EmpNo   Name  \tSal \n");
		fread(&e1, sizeof(struct emp), 1, fpRead)
		PrintEmpInfo(e1);*/


		//fread function has four parameters
		//fread( void pointer , noofbytes, noofrecords, filepinter from which you have to read data);


		// read all records
		printf("\n EmpNo   Name  \tSal \n");
		while(fread(&e1, sizeof(struct emp), 1, fpRead))
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
	fpWrite= fopen("emp.out", "ab");
	if (fpWrite==NULL)
		printf("\n Unable to create file in append mode");
	else
	{
		AcceptEmpInfo(&e1);

		// fprintf write into text file
		//fprintf(fpWrite,"\n %d %s %f",e1.empno, e1.name, e1.sal);

		//fwrite write into binary file
		fwrite(&e1, sizeof(struct emp), 1, fpWrite);

		//fwrite function has four parameters
		//fwrite( void pointer , noofbytes, noofrecords, filepinter in which you have to write data);

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
