/*
#include"stack.h"

void stack_init(stack_t *ps)
{
	ps->top = -1;
}

int stack_isempty(stack_t *ps)
{
	return ( ps->top == -1 );
}

int stack_isfull(stack_t *ps)
{
	return ( ps->top == S_SIZE-1 );
}

void stack_push(stack_t *ps, int ele)
{
	(ps->top)++;
	ps->arr[ ps->top ] = ele;
}

int stack_pop(stack_t *ps)
{
	int ele = ps->arr[ps->top];
	(ps->top)--;
	return ele;
}

int peek_element(stack_t *ps)
{
	return (ps->arr[ps->top]);
}

*/
