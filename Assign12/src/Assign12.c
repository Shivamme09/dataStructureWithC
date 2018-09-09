/*
 ============================================================================
 Name        : menuDrivenStructure
 Author      : Shivam Choubey(25466)
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
}stu;

void insert(FILE *fp);
void display(FILE *fp);
void insert(FILE *fp);
int searchname(FILE *fp,char *name);
void modify(FILE *fp);
int searchrollno(FILE *fp,int rollno);
int main(void)
{
	 FILE *fp;
	 int choice;
	 fp=fopen("student.dat","rb+");
	 if(fp==NULL)
	 {
		 fp=fopen("student.dat","wb+");
		 if(fp==NULL)
		 {
			 puts("\nerror in opening file");
			 exit(1);
		 }
	 }


	 do{
		 choice=menuoperations();
	 switch (choice) {
	 		case 1:
	 			insert(fp);
	 			break;
	 		case 2:
	 			findname(fp);
	 			break;

	 		case 3:
	 			findrollno(fp);
	 		case 4:
	 			modify(fp);
	 			break;
	 		case 5:
	 			list(fp);
	 			break;
	 		default:
	 			printf("you entered the wrong choice");
	 			continue;
	 	}
	 printf("enter 1 for coninue and 0 for exit");
	 scanf("%d",&choice);
	 }
	 while(choice!=0);
	return EXIT_SUCCESS;
}
void insert(FILE *fp)
{
	fseek( fp,0,2);//2 is the value seek_end
	printf("enter the name of student :");
	scanf("%s",stu.name);
	printf("enter the roll no of the student :");
	scanf("%d",&stu.rollno);
	fwrite(&stu,sizeof(stu),1,fp);
}
void findname(FILE *fp)
{
	char name[50];
	printf("enter the name of student :");
	scanf("%s",name);
	searchname(fp,name);
	printf("\nName %s ",stu.name);
	printf("\nRoll no %d",stu.rollno);

}
int searchname(FILE *fp,char *name)
{
	unsigned flag=0;
	rewind(fp);
	while(fread(&stu,sizeof(stu),1,fp)==1)
	{
		if (strcmp(name,stu.name)==0)
		{
			flag=1;
			break;

		}
	}
	if (flag==0)
		printf("\nName not found");
	return flag;
}
void modify(FILE *fp)
{
	char name[20];
	long size=sizeof(stu);
	printf("enter the name that record's want to modify:");
	scanf("%s",name);
	if(searchname(fp,name)==1)
	{
		printf("enter the new data :");
		printf("enter the name of student :");
		scanf("%s",stu.name);
		printf("enter the roll no of student :");
		scanf("%d",stu.name);
		fseek(fp,-size,1);
		fwrite(&stu,sizeof(stu),1,fp);
		printf("\nrecord modified successfully");

	}

}
void list(FILE *fp)
{
	rewind(fp);
	printf("\n NAME \t ROLLNO\n\n");
	while(fread(&stu,sizeof(stu),1,fp)==1)
	{
		printf("%s\t",stu.name);
		printf("%d\t",stu.rollno);
		printf("\n");
	}
printf("\n");
}
int menuoperations()
{
	int choice;

	printf("\n1 for  insert in record.");
	printf("\n2 for dispaly the records by name");
	printf("\n3 for dispaly the records by rollno");

	printf("\n4 for modify thr data.");
	printf("\n5 for view the list.");
	printf("\nenter your choice :");
		scanf("%d",&choice);
	return choice;
}
void findrollno(FILE *fp)
{
	int rollno;
	printf("enter the ro of student :");
	scanf("%d",&rollno);
	searchrollno(fp,rollno);
	printf("\nName %s ",stu.name);
	printf("\nRoll no %d",stu.rollno);

}
int searchrollno(FILE *fp,int rollno)
{
	unsigned flag=0;
	rewind(fp);
	while(fread(&stu,sizeof(stu),1,fp)==1)
	{
		if (rollno==stu.rollno)
		{
			flag=1;
			break;

		}
	}
	if (flag==0)
		printf("\nroll no not found");
	return flag;
}
