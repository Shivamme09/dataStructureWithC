/*
 * treeSelf.h
 *
 *  Created on: 07-Sep-2018
 *      Author: sunbeam
 */

#ifndef TREESELF_H_
#define TREESELF_H_

typedef struct node
{
	struct node *left;//left link -- contains addr of left child
	int data;//actual data of any primitive or derived data type
	struct node *right;//right link -- contains addr of right child
	int height; // height of the node
}node_t;

typedef struct
{
	node_t *root;
}tree_t;

void init_tree(tree_t *t);
node_t *create_node(int data);
void add_rec(tree_t *t, node_t *trav, node_t *parent, int data);
void add_node(tree_t *t, int data);
void preorder(node_t *trav);
void clear(node_t *trav);
int height(node_t *trav);
int bf(node_t *trav);
void calc_height(node_t *trav);
void left_rotate(tree_t *t, node_t *axis, node_t *parent);
void right_rotate(tree_t *t, node_t *axis, node_t *parent);

#endif /* TREESELF_H_ */
