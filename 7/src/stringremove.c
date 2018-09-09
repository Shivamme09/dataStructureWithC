/*
 ============================================================================
 Name        : stringremove.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[20]={'i','n','d','i','a','\0'};
	int j,i;
	char key='d';
	int len=strlen(str);
	for(j=0;j<len;j++)
	{
		if(str[j]==key)

		{
			for(i=j;i<len;i++)
			{
				str[i]=str[i+1];
		}
		//j=j-1;
		//strlen(str)=strlen(str)-1;
		//len=len-1;
	}}
	//for(i=0;i<len;j++)
		printf("%s",str);
	return EXIT_SUCCESS;
}
