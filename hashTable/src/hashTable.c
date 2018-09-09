/*
 ============================================================================
 Name        : hashTable.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "hashTable.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

node_t *node_create(int key, char value[])//used to create node
{
	node_t *newnode=(node_t*)malloc(sizeof(node_t));
	newnode->data.key=key;
	strcpy(newnode->data.value,value);
	newnode->next=NULL;
	return newnode;
}
void list_init(list_t *l)
{
	l->head=NULL;
}//initialise list

void list_add(list_t *l,int key,char value[])
{
	node_t *newnode=node_create(key,value);
	if(l->head==NULL)
	{
		l->head=newnode;
	}
	else
	{
		node_t *trav=l->head;
		while(trav->next!=NULL)
		{
			trav=trav->next;
		}
		trav->next=newnode;
	}
}//adding list

void display(list_t *l)
{
	node_t *trav=l->head;
	while(trav!=NULL)
	{
		printf("[%d][%s]->",trav->data.key,trav->data.value);
		trav=trav->next;
	}
	printf("\n");
}//displaying list

node_t* list_find(list_t *l,int key)
{
	node_t *trav=l->head;
	while(trav!=NULL)
	{
		if(key==trav->data.key)
		{
			return trav;
		}
		trav=trav->next;
	}
	return NULL;
}//find list with a key value

void ht_init(hashtable_t *ht)
{
	int i;
	for(i=0;i<MAX;i++)
	{
		list_init(&ht->table[i]);
	}
}

void put_ht(hashtable_t *ht,int key,char value[])
{
	int i=SLOT(key);
	node_t *pair=list_find(&ht->table[i],key);
	if(pair!=NULL)
	{
		strcpy(pair->data.value,value);
	}
	list_add(&ht->table[i],key,value);
}

char* get_ht(hashtable_t *ht,int key)
{
	int i=SLOT(key);
	node_t *pair=list_find(&ht->table[i],key);
	if(pair!=NULL)
	{
		return pair->data.value;
	}
	return NULL;
}
