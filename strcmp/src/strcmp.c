/*
 ============================================================================
 Name        : strcmp.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int mystrcmp(const char* s1,const char* s2);
int main(void)
{
	char src[SIZE];
	char dest[SIZE];
	int ans;
	printf("Enter Source");
	gets(src);
	printf("Enter Destination");
	gets(dest);
	ans=mystrcmp(dest,src);
	if (ans==0)
	{
		printf("Strings are same");
	}
	else if(ans >1)
	{
		printf("First String is Bigger");
	}
	else
	{
		printf("Second String is Bigger");
	}
	return EXIT_SUCCESS;
}
int mystrcmp(const char* s1,const char* s2)
{
	int i;
	for( i=0; *(s1+i)!='\0' || *(s2+i)!='\0' ; i++ )
		//for(i=0;s[i]!=0 || s[j]!=0;i++)
	{
		if(*(s1+i) != *(s2+i))
			//s1[i]!=s2[i]
			return *(s1+i)-*(s2+i); //return s1[i]-s2[i];
	}
	return 0;
}
