/*
 ============================================================================
 Name        : Day3Practise.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	char ch;

	printf("\n Enter char :: ");
	scanf("%c", &ch);

	printf("\n ch=%c ch=%d", ch, ch);

	if (ch >= 65 && ch <= 90)
		ch += 32; // ch=ch+32;

	printf("\n ch=%c ch=%d", ch, ch);

	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		printf("\n %c is vov", ch);
	else if (ch >= 97 && ch <= 122)
		printf("\n %c is con", ch);
	else if (ch >= 48 && ch <= 57)
		printf("\n %c is digit", ch);
	else
		printf("\n %c is other char", ch);

	return EXIT_SUCCESS;
}
