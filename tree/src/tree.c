/*
 ============================================================================
 Name        : tree.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>

#include"tree_header.h"

void init_tree(tree_t *t)
{
	t->root =NULL;
}

void *create_node(int data)//takes int data as input
{
	node_t *temp=(node_t *)malloc(sizeof(node_t));//creating node
	if(temp==NULL)
	{
		perror("Failed");
		exit(0);
	}
	else
		//initialise members of node
		temp->data=data;
		temp->left=NULL;
		temp->right=NULL;
		temp->visited=0;
		return temp;
}

void add_node(tree_t *t,int data)
{

	if(t->root==NULL)
	{
		t->root=create_node(data);
	}
	else
	{
		node_t *trav=t->root;
		while(1)
		{

			if(data < trav->data)
			{
				if(trav->left==NULL)
				{
					trav->left=create_node(data);
					break;
				}
				else
				{
					trav=trav->left;
				}
			}
			else
			{
				if(trav->right==NULL)
				{
					trav->right=create_node(data);
					break;
				}
				else
				{
					trav=trav->right;
				}
			}
		}
	}
}

void preorder(node_t *trav)
{
	if(trav==NULL)
		return;
	printf("%4d",trav->data);
	preorder(trav->left);
	preorder(trav->right);

}

void inorder(node_t *trav)
{
	if(trav==NULL)
		return;
	inorder(trav->left);
	printf("%4d",trav->data);
	inorder(trav->right);
}

void postorder(node_t *trav)
{
	if(trav==NULL)
		return;
	postorder(trav->left);
	postorder(trav->right);
	printf("%4d",trav->data);
}

void clear(node_t *trav)
{
	if(trav==NULL)
		return;
	clear(trav->left);
	clear(trav->right);
	free(trav);
}

node_t* find_node(tree_t *t,int key)
{
	node_t *trav=t->root;
	while(trav!=NULL)
	{
		if(key==trav->data)
		{
			return trav;
		}
		if(key<trav->data)
		{
			trav=trav->left;
		}
		else
		{
			trav=trav->right;
		}
	}
	return NULL;
}

node_t* find_node_with_parent(tree_t *t,int key,node_t **parent)
{
	node_t *trav=t->root;
	*parent=NULL;
	while(trav!=NULL)
	{
		if(key==trav->data)
		{
			return trav;
		}
		*parent=trav;
		if(key<trav->data)
		{
			trav=trav->left;
		}
		else
		{
			trav=trav->right;
		}
	}
	*parent=NULL;
	return NULL;
}

void delete_element(tree_t *t,int key)
{
	node_t *parent,*temp,*succ;
	temp=find_node_with_parent(t,key,&parent);
	if(temp==NULL)
	{
		printf("\nEmpty Tree");
		return;
	}
	//temp=t->root;

	if(temp->left==NULL)
	{
		if(temp==t->root)
		{
			t->root=temp->right;
		}
		else if(temp==parent->left)
		{
			parent->left=temp->right;
		}
		else
		{
			parent->right=temp->right;
		}
		free(temp);
	}
	if(temp->right==NULL)
	{
		if(temp==t->root)
		{
			t->root=temp->left;
		}
		else if(temp==parent->left)
		{
			parent->left=temp->left;
		}
		else
		{
			parent->right=temp->left;
		}
		free(temp);
	}
	if(temp->left!=NULL && temp->right!=NULL)
	{
		parent=temp;
		succ = temp->right;
		while(succ->left!=NULL)
		{
			parent=succ;
			succ=succ->left;
		}
		temp->data=succ->data;
		temp=succ;
		//free(temp);
	}
}
/*
int height(node_t *trav)
{
	//tree_t *t;
	int hl,hr,max;
	if(trav==NULL)
	{
		return -1;
	}
	hl=height(trav->left);
	hr=height(trav->right);
	max=(hl>hr)? hl:hr;
	return max+1;
}*/
int height(node_t *trav)
{
	if(trav == NULL)
		return -1;
	return trav->height;
}
