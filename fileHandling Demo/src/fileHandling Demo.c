/*
 ============================================================================
 Name        : fileHandling.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char num[20];
	FILE *fp;
	//To open file we use file pointer=fopen(filename,mode);
	fp=fopen("a.txt","a+");
	//For reading file we use fscanf or fgets
	//fscanf(File pointer,"%d",&variable name);
	//It just hold the value for printing in the console we have to again use printf
	//fgets();
	//fgetc();
	//variable_name=fgetc(file pointer);
	//fscanf(fp,"%d",&num);

	//For printing file we use fprintf or fputs
	//fprintf(file pointer,"%d",variable name);
	//fputs();
	//fputc();
	//fputc(variable, file_pointer); //variable can be integer or char;

	printf("Enter Name\n");
	scanf("%s",num);
	fprintf(fp,"\n%s",num);
	fscanf(fp,"%s",&num);
	printf("%s",num);
	fclose(fp);
	return EXIT_SUCCESS;
}
