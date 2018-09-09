/*
 ============================================================================
 Name        : stackRev.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
typedef struct stack
{
	int arr[SIZE];
	int top;
}stack_t;

void init_stack(stack_t *ps);

int is_full(stack_t *ps);

int is_empty(stack_t *ps);

void push(stack_t *ps,int data);

void pop(stack_t *ps);

int peek(stack_t *ps);

enum options{EXIT,PUSH,POP,PEEK};

int menu(void)
{
	int ch;
	printf("\nSTACK OPERATIONS\n");
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
	stack_t t;
	int element;
	int choice;
	init_stack(&t);

	while(1)
	{
		choice=menu();

		switch(choice)
		{

		case 0:exit(0);

		case 1:
				  printf("\n Push Element");
				  if(!(is_full(&t)))
				  {
					  printf("\nEnter Element to Push");
					  scanf("%d",&element);
					  push(&t,element);
					  printf("\n Item Pushed to the Stack");
				  }
				  else
				  {
					  printf("\n Stack is Full,Stack Overflow");

				  }
				  break;
		case 2:
				 printf("\nPop Element");
				 if(!is_empty(&t))
				 {
					 pop(&t);
					 printf("\nItem poped from Stack");
				 }
				 else
					printf("\n Stack is Empty,Stack Underflow");
				 break;
		case 3:
				  printf("\nPeek Element");
				  printf("\nPeek Element is %d",peek(&t));
				  break;
		default:
				printf("\n Invalid Choice");
				break;
		}

	}
	return EXIT_SUCCESS;
}

void init_stack(stack_t *ps)
{
	ps->top=-1;
}

int is_empty(stack_t *ps)
{
	return (ps->top==-1);
}

int is_full(stack_t *ps)
{
	return (ps->top==SIZE-1);
}

void push(stack_t *ps,int data)
{
	//ps->top++;
	ps->arr[++ps->top]=data;
}

void pop(stack_t *ps)
{
	ps->top--;
}

int peek(stack_t *ps)
{
	return ps->arr[ps->top];
}
