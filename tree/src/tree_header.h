/*
 * tree_header.h
 *
 *  Created on: 07-Sep-2018
 *      Author: sunbeam
 */

#ifndef TREE_HEADER_H_
#define TREE_HEADER_H_

//used to define node
typedef struct node
{

	int data;
	struct node_t *left;
	struct node_t *right;
	int height;

}node_t;

typedef struct //used to define root
{
	node_t *root;

}tree_t;

void init_tree(tree_t *t); // for initialising tree

void *create_node(int data);//for creating node

void add_node(tree_t *t,int data); //for adding node

void preorder(node_t *trav);

void inorder(node_t *trav);

void postorder(node_t *trav);

void clear(node_t *trav);

node_t* find_node(tree_t *t,int key);

node_t *find_node_with_parent(tree_t *t,int key,node_t **parent);

void delete_element(tree_t *t,int key);

int height(node_t *trav);


#endif /* TREE_HEADER_H_ */
