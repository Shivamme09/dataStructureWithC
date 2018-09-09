/*
 ============================================================================
 Name        : singularLinkedList.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;//data part
	struct node *next;//self refrential structure that points to the same data type elememts
}node_t;

node_t *head=NULL;//creating head element and making it NULL
void add_at_last(int data);//User defined function for addition of elements at last and passing DATA to it.
void *create_node(int data);//User defined function for creating new node using malloc and passing DATA to it.
void display_list(void);//Used for dislaying List.
void add_at_first(int data);
void add_at_specific_pos(int data,int pos);
void delete_at_first(void);
void delete_at_specific_pos(int pos);
void display_reverse(node_t *trav);
void delete_at_last(void);
void free_list(void);
void list_reverse(void);
int cnt=1;
int main(void)
{
	add_at_last(10);
	add_at_last(20);
	add_at_last(30);
	add_at_last(40);
	add_at_last(50);
	add_at_last(60);
	add_at_first(54);
	add_at_specific_pos(88,5);
	display_list();
	printf("\n---------------------------");
	delete_at_first();
	display_list();
	delete_at_last();
	display_list();
	delete_at_specific_pos(5);
	display_list();
	printf("\n---------------------------");
	printf("\nList in Reverse Order is ->");
	display_reverse(head);
	printf("\n");
	delete_at_last();
	display_list();
	printf("\n---------------------------");
	list_reverse();
	display_list();
	return EXIT_SUCCESS;
}
void add_at_last(int data)
{
	//create a new node
	node_t *newnode=create_node(data);
	if(head==NULL)
	{
		//attach newly created node to the head i.e. store the addr of newly created
		//node into the head
		head=newnode;
		cnt++;
	}
	else //if list is not empty
	{
		node_t *trav=head;

		while(trav->next!=NULL)//condition for checking last node
			trav=trav->next;//till last node perform traverse i.e next points to next node.
		trav->next=newnode;
		cnt++;
	}
}
void *create_node(int data)
{
	//allocate memory dynamically for temp
	node_t *temp=(node_t *)malloc(sizeof(node_t));

	if(temp==NULL)
		{
			perror("Failed\n");
			exit(1);
		}
		//initialise data part and next part
	temp->data=data;
	temp->next=NULL;
	return temp;// returns starting address of temp to the calling function.
}
void display_list(void)
{
	if(head!=NULL)
		{
			node_t *trav=head;
			printf("\nList is head->");
			while(trav!=NULL)
			{
				printf("%d->",trav->data);
				trav=trav->next;
			}
			printf("NULL\n");
			printf("no. of nodes in a list: %d\n", cnt);
		}
	else
		{
			printf("\nList is Empty");
		}
}
void add_at_first(int data)
{
	node_t *newnode=create_node(data);
	if(head==NULL)//if list is empty
	{
		head=newnode;
		cnt++;
	}
	else
	{
		newnode->next=head;
		head=newnode;
		cnt++;
	}
}
void add_at_specific_pos(int data,int pos)
{
	if(pos==1)
	{
		add_at_first(data);
	}
	if(pos==cnt+1)
	{
		add_at_last(data);
	}
	else
		{
			node_t *newnode=create_node(data);
			int i=1;
			node_t *trav=head;
			while(i < pos-1)
			{
				i++;
				trav=trav->next;
			}
			newnode->next=trav->next;
			trav->next=newnode;
		}
}
void delete_at_first(void)
{
	if(head!=NULL)
	{
		if(head->next==NULL)
		{
			free(head);
			head=NULL;
			cnt--;
		}
		else
		{
			node_t *temp=head;
			head=head->next;
			free(temp);
			temp=NULL;
			cnt--;
		}
	}

}
void delete_at_last(void)
{
	if(head!=NULL)
	{
		if(head->next==NULL)
		{
			free(head);
			head=NULL;
			cnt--;
		}
		else
			{
				node_t *trav = head;

				while(trav->next->next!=NULL)
				{
					trav=trav->next;
				}
				free(trav->next);
				trav->next=NULL;
				cnt--;
			}
	}
}
void delete_at_specific_pos(int pos)
{
		if(pos==1)
		{
			delete_at_first();
		}
		else if(pos==cnt)
		{
			delete_at_last();
		}

		else
		{

			node_t *temp=NULL;
			node_t *trav=head;
			int i=1;
			while(i<pos-1)
			{
				i++;
				trav=trav->next;
			}
			temp=trav->next;
			trav->next=temp->next;
			free(temp);
			temp=NULL;
			cnt--;
		}
}
void display_reverse(node_t *trav)
{

	if(trav==NULL)
	{
		return ;
	}
	display_reverse(trav->next);
	printf("%4d",trav->data);
}
void free_list(void)
{
	if(head!=NULL)
	{
		while(head!=NULL)
		{
			delete_at_last();

		}
		printf("\n All Elements Freed.");

	}
}
void list_reverse(void)
{
	node_t *temp1=head;
	node_t *temp2=temp1->next;
	node_t *temp3=NULL;

	temp1->next = NULL;

	while(temp2!=NULL)
	{
		temp3=temp2->next;
		temp2->next=temp1;
		temp1=temp2;
		temp2=temp3;
	}
	head=temp1;
}
