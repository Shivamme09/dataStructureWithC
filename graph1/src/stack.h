#ifndef STACK_H_
#define STACK_H_

#define S_SIZE 20

typedef struct
{
	int arr[S_SIZE];
	int top;
}stack_t;

void stack_init(stack_t *ps);
int stack_isempty(stack_t *ps);
int stack_isfull(stack_t *ps);
void stack_push(stack_t *ps, int ele);
int stack_pop(stack_t *ps);
//int peek_element(stack_t *ps);
int peekele();


#endif /* STACK_H_ */
