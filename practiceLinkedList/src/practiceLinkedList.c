/*
 ============================================================================
 Name        : practiceLinkedList.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//Creating Structure and using typedef
typedef struct node
{
	int data;
	struct node *next;
}node_t;
node_t *head=NULL;
void display_list(void);//used for displaying list
void *create_node(int data);//used for creating list
void add_at_last(int data);//used for add_at_last

int main(void)
{
	add_at_last(10);
	add_at_last(20);
	add_at_last(30);
	add_at_last(40);
	display_list();
	return EXIT_SUCCESS;
}
void add_at_last(int data)
{
	node_t *newnode=create_node(data);
	if(head==NULL)
		{
			head=newnode;
		}
	else
	{
		node_t *trav=head;
		while(trav->next!=NULL)
			trav=trav->next;
		trav->next=newnode;
	}
}
void *create_node(int data)
{
	node_t *temp=(node_t *)malloc(sizeof(node_t));
	if(temp==NULL)
	{
		perror("Terminated!!!\n");
		exit(1);
	}

	temp->data=data;
	temp->next=NULL;
	return temp;
}
void display_list(void)
{
	if(head!=NULL)
	{
		node_t *trav=head;
		printf("\nhead is ->");
		while(trav!=NULL)
		{
			printf("%d->",trav->data);
			trav=trav->next;
		}
		printf("NULL\n");
	}
	else
		printf("\nList is empty\n");
}
