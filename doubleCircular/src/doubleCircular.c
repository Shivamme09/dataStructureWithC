/*
 ============================================================================
 Name        : doubleCircular.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int data;
	struct node_t *next;
	struct node_t *prev;
}node_t;

node_t *head=NULL;

int count;

void *create_node(int data);

void display_list(void);

void add_node_at_last(int data);

void add_at_first(int data);


int main(void)
{
	add_node_at_last(10);
	add_node_at_last(20);
	add_node_at_last(30);
	add_node_at_last(40);
	add_node_at_last(50);
	add_node_at_last(60);
	add_at_first(5);
	printf("List is:");
	display_list();
	return EXIT_SUCCESS;
}
void *create_node(int data)
{
	node_t *temp=(node_t *)malloc(sizeof(node_t));
	if(temp==NULL)
	{
		perror("Failed");
		exit(0);
	}
	temp->data=data;
	temp->next=NULL;
	temp->prev=NULL;
	return temp;
}

void add_node_at_last(int data)
{
	//node_t *trav=head;
	node_t *trav=NULL;
	node_t *newnode=create_node(data);
	if(head==NULL)
	{
		head=newnode;
		newnode->next=head;
		newnode->prev=head;
		count++;
	}
	else
	{
		trav=head;
		while(trav->next!=head)
		{
			trav=trav->next;
		}
		//printf("\n%d",trav->next);
		newnode->prev=trav;
		newnode->next=head;
		trav->next=newnode;
		head->prev=newnode;
		count++;
	//	head->prev=newnode;
		//newnode->prev = head->next;
	}

}
void display_list(void)
{
	node_t *trav=head;
	if(head!=NULL)
	{
		/*if(trav->next==head)
		{
			printf("\n%d->",head->data);
		}
		else
		{*/

		do
			{
				printf("%d->",trav->data);
				//printf("\n***");
				//printf("\n%d",trav->next);
				trav=trav->next;
			}


		while(trav!=head);

		printf("NULL");
		printf("\nTotal Counter %d",count);
	}
	else
		printf("\nlist is empty");
}

void add_at_first(int data)
{
	node_t *newnode=create_node(data);
	node_t *trav=head;
	if(head==NULL)
	{
		head=newnode;
		count++;
	}
	else
	{
		while(trav->next!=head)
		{
			trav=trav->next;
		}
		newnode->next=head;
		newnode->prev=trav;
		head->prev=newnode;
		head=newnode;
		trav->next=newnode;
		count++;
	}
}
