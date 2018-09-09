/*
 ============================================================================
 Name        : assign8.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_L 4096

void replace (char *, char *, char *);

int main(void) {
    char o_string[MAX_L], s_string[MAX_L], r_string[MAX_L];

    printf("Enter the original string: ", MAX_L);
    fflush(stdin);
    gets(o_string);

    printf("\nEnter the string to search ", MAX_L);
    fflush(stdin);
    gets(s_string);

    printf("\nEnter the replace string", MAX_L);
    fflush(stdin);
    gets(r_string);

    printf("\n\nThe Original string:\n\n");
    puts(o_string);

    replace(o_string, s_string, r_string);

    printf("\n\nThe replaced string:\n\n");
    puts(o_string);

    return 0;
}

void replace(char * o_string, char * s_string, char * r_string) {

      char buffer[MAX_L];
      char * ch;


      if(!(ch = strstr(o_string, s_string)))
              return;

      printf("\n[%u]",ch);
      printf("\n[%u]",o_string);
      printf("\n[%u]",ch-o_string);

      strcpy(buffer, o_string);

      buffer[ch-o_string] = 0;


      sprintf(buffer+(ch - o_string), "%s%s", r_string, ch + strlen(s_string));


      o_string[0] = 0;
      strcpy(o_string, buffer);

      return replace(o_string, s_string, r_string);
 }
