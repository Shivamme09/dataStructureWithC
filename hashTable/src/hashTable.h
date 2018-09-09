/*
 * hashtable.h
 *
 *  Created on: 09-Sep-2018
 *      Author: sunbeam
 */

#ifndef HASHTABLE_H_
#define HASHTABLE_H_

#define HASH(k) k * 31

#define MAX 10
#define SLOT(k) (HASH(k) % MAX)

typedef struct pair
{
	int key; //rollno
	char value[20];//name

}pair_t;

typedef struct node
{
	pair_t data;
	struct node_t *next;
}node_t;

typedef struct list
{
	node_t *head;
}list_t;

node_t *node_create(int key, char value[]);//used to create node

void list_init(list_t *l);//initialise list

void list_add(list_t *l,int key,char value[]);//adding list

void display(list_t *l);//displaying list

node_t* list_find(list_t *l,int key);//find list with a key value

//HashTable Implementation

typedef struct hastable
{
	list_t table[MAX];
}hashtable_t;

void ht_init(hashtable_t *ht);

void put_ht(hashtable_t *ht,int key,char value[]);

char* get_ht(hashtable_t *ht,int key);


#endif /* HASHTABLE_H_ */
