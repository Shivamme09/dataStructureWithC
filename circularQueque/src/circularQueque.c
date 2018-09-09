/*
 ============================================================================
 Name        : circularQueque.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
typedef struct
{
	int arr[SIZE];
	int front;
	int rear;
}queque_t;

void init_queque(queque_t *pq);

int is_empty(queque_t *pq);

int is_full(queque_t *pq);

void addition(queque_t *pq,int data);

void deletion(queque_t *pq);

int get_front(queque_t *pq);

enum option{Exit,Addition,Deletion,GetFront};

int main(void)
{
	queque_t t;
	init_queque(&t);
	char choice;
	int element;
	printf("Enter Choice\n");

	while(1)
	{
		printf("\n");
		printf("\nMenu:\n");
		printf("\n0.Exit\n1.Addition\n2.Deletion\n3.Get Front\n");
		scanf("%d",&choice);
	switch(choice)
	{
	 	 case Exit:
	 			 printf("\nExiting");
	 	 	 	 exit(0);
	 	 case 1:
	 			 printf("\nAddition");
	 	 	 	 if(!is_full(&t))
	 	 	 	 {
	 	 	 		 printf("\nEnter Element");
	 	 	 		 scanf("%d",&element);
	 	 	 		 addition(&t,element);
	 	 	 	 }
	 	 	 	 else
	 	 	 		 printf("\nList is Full,Overflow");
	 	         break;
	 	 case 2:
	 			 printf("\nDeletion");
	 	 	 	 if(!is_empty(&t))
	 	 	 	 {
	 	 	 		 element=get_front(&t);
	 	 	 		 deletion(&t);
	 	 	 		 printf("\nElement deleted");
	 	 	 	 }
	 	 	 	 else
	 	 	 		 printf("\nList is Empty,Underflow");
	 	 	 	 break;
	 	 case 3:
	 			 if(!(is_empty(&t)))
	 			 {
	 				printf("\nGet Front Element is %d",get_front(&t));
	 			 }
	 			 else
				 {
					 printf("\n Stack is Empty");
				 }
	 	 	 	 break;
	 	 default:
	 		 	 printf("\nInvalid Choice");
	 		 	 break;
	}

	}
	return EXIT_SUCCESS;
}
void init_queque(queque_t *pq)
{
	pq->front=-1;
	pq->rear=-1;

}

int is_empty(queque_t *pq)
{
	//return (pq->rear==-1 || pq->front > pq->rear);
	return (pq->rear==-1 && pq->rear==pq->front);
}

int is_full(queque_t *pq)
{
	//return (pq->rear == SIZE-1);
	return (pq->front==((pq->rear)+1)%SIZE);
}

void addition(queque_t *pq,int ele)
{
    /*pq->rear++;
	pq->arr[pq->rear]=ele;
	if(pq->front==-1)
	{
		pq->front=0;
	}*/
	pq->rear=(pq->rear+1)%SIZE;
	pq->arr[pq->rear]=ele;
	if(pq->front==-1)
	{
		pq->front=0;
	}
}

void deletion(queque_t *pq)
{
	//pq->front++;
	if(pq->front==pq->rear)
	{
		init_queque(pq);
	}
	else
	{
		pq->front=(pq->front)+1%SIZE;
	}
}

int get_front(queque_t *pq)
{
	return (pq->arr[pq->front]);
}
