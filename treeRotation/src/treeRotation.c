/*
 ============================================================================
 Name        : treeRotation.c
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
	int data;
	struct node_t *left;
	struct node_t *right;
	int visited;
	int height;
}node_t;

typedef struct
{
	node_t *root;

}tree_t;

void init(tree_t *t);

node_t *create_node(int data);

void add_node(tree_t *t,int data);

void add_node_rec(tree_t *t,node_t *trav,node_t *parent,int data);

void preorder(node_t *t);

void clear(node_t *trav);

int height(node_t *trav);

int bf(node_t *trav);

void calculate_height(node_t *trav);

void left_rotate(tree_t *t,node_t *axis,node_t *parent);

void right_rotate(tree_t *t,node_t *axis,node_t *parent);

int main(void)
{
	return EXIT_SUCCESS;
}

void init_tree(tree_t *t)
{
	t->root = NULL;
}

node_t *create_node(int data)
{
	//allocate memory dynamically
	node_t *temp = (node_t *)malloc(sizeof(node_t));
	if( temp == NULL )
	{
		perror("malloc() failed !!!\n");
		exit(0);
	}
	//initialize members of the node
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	temp->height = 0;
	//return the addr of newly created node
	return temp;
}

