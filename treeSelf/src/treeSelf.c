/*
 ============================================================================
 Name        : treeSelf.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include "treeSelf.h"

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

void add_node(tree_t *t, int data)
{
	if(t->root == NULL)
		t->root = create_node(data);
	else
		add_rec(t, t->root, NULL, data);
}

void add_rec(tree_t *t, node_t *trav, node_t *parent, int data)
{
	if(data < trav->data)
	{
		if(trav->left != NULL)
			add_rec(t, trav->left, trav, data);
		else
			trav->left = create_node(data);
	}
	else // if(data >= trav->data)
	{
		if(trav->right != NULL)
			add_rec(t, trav->right, trav, data);
		else
			trav->right = create_node(data);
	}
	calc_height(trav);

	if(bf(trav) < -1 || bf(trav) > +1)
	{
		node_t *child = data < trav->data ? trav->left : trav->right;
		node_t *gchild = data < child->data ? child->left : child->right;
		// LL case
		if(child == trav->left && gchild == child->left)
		{
			right_rotate(t, trav, parent);
			return;
		}
		// LR case
		if(child == trav->left && gchild == child->right)
		{
			left_rotate(t, child, trav);
			right_rotate(t, trav, parent);
			return;
		}
		// RR case
		if(child == trav->right && gchild == child->right)
		{
			left_rotate(t, trav, parent);
			return;
		}
		// RL case
		if(child == trav->right && gchild == child->left)
		{
			right_rotate(t, child, trav);
			left_rotate(t, trav, parent);
			return;
		}
	}
}

void calc_height(node_t *trav)
{
	int hl = height(trav->left);
	int hr = height(trav->right);
	int max = hl > hr ? hl : hr;
	trav->height = max + 1;
}

void right_rotate(tree_t *t, node_t *axis, node_t *parent)
{
	node_t *newaxis;
	if(axis == NULL || axis->left == NULL)
		return;
	newaxis = axis->left;
	axis->left = newaxis->right;
	newaxis->right = axis;
	if(axis == t->root)
		t->root = newaxis;
	else if(axis == parent->left)
		parent->left = newaxis;
	else // if(axis == parent->right)
		parent->right = newaxis;
	calc_height(axis);
	calc_height(newaxis);
}

void left_rotate(tree_t *t, node_t *axis, node_t *parent)
{
	node_t *newaxis;
	if(axis == NULL || axis->right == NULL)
		return;
	newaxis = axis->right;
	axis->right = newaxis->left;
	newaxis->left = axis;
	if(axis == t->root)
		t->root = newaxis;
	else if(axis == parent->left)
		parent->left = newaxis;
	else // if(axis == parent->right)
		parent->right = newaxis;
	calc_height(axis);
	calc_height(newaxis);
}

int height(node_t *trav)
{
	if(trav == NULL)
		return -1;
	return trav->height;
}

void clear(node_t *trav)
{
	if( trav == NULL )
		return;
	clear(trav->left);
	clear(trav->right);
	free(trav);
}
void preorder(node_t *trav)
{
	if( trav == NULL )
		return;
	printf("%d(%d)\t", trav->data, trav->height);
	preorder(trav->left);
	preorder(trav->right);
}

int bf(node_t *trav)
{
	if(trav == NULL)
		return 0;
	return height(trav->left) - height(trav->right);
}
