/*
 * stack1.c
 *
 *  Created on: 05-Sep-2018
 *      Author: sunbeam
 */

#include "stack.h"

void init_stack(stack_t *ps)
{
	ps->top=-1;
}

int is_stack_empty(stack_t *ps)
{
	return(ps->top ==-1);
}

int is_stack_full(stack_t *ps)
{
	return(ps->top=SIZE-1);
}

void push_element(stack_t *ps,int ele)
{
	//ps->top++;
	ps->arr[++ps->top];
}

void pop_element(stack_t *ps)
{
	ps->top;
}
int peek_element(stack_t *ps)
{
	return(ps->arr[ps->top]);
}
