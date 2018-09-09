/*
 ============================================================================
 Name        : stack.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include "stack.h"

enum options { EXIT, PUSH, POP, PEEK };

int menu(void)
{
	int ch;
	printf("STACK OPERATIONS\n");
	printf("0. EXIT\n");
	printf("1. PUSH\n");
	printf("2. POP\n");
	printf("3. PEEK\n");
	printf("enter the choice: ");
	scanf("%d", &ch);

	return ch;
}
int main(void)
{
	int choice;
	int ele;
	stack_t s;
	init_stack(&s);

	while(1)
	{
		choice = menu();
		switch( choice )
		{
		case EXIT: exit(0);
		case PUSH:
			//- check stack is not full
			if( !is_stack_full(&s) )
			{
				printf("enter ele: ");
				scanf("%d", &ele);
				push_element(&s, ele);
				printf("%d pushed into the stack successfullyy...\n", ele);
			}
			else
				printf("stack overflow !!!\n");
			break;
		case POP:
			if( !is_stack_empty(&s) )
			{
				ele = peek_element(&s); pop_element(&s);
				printf("popped ele is: %d\n", ele);
			}
			else
				printf("stack underflow !!!\n");
			break;
		case PEEK:
			if( !is_stack_empty(&s))
			{
				printf("topmost ele is: %d\n", peek_element(&s));
			}
			else
				printf("stack underflow !!!\n");
			break;
		}
	}

	return 0;
}


