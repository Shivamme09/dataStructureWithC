/*
 * main.c
 *
 *  Created on: 07-Sep-2018
 *      Author: sunbeam
 */


#include <stdio.h>
#include <stdlib.h>
#include "tree_header.h"

int main(void)
{
	int key_value;
	tree_t t1;
	node_t t2;
	init_tree(&t1);
	int res;
	// 10 80 40 88 98 45 15 78 3
	add_node(&t1,10);
	add_node(&t1,80);
	add_node(&t1,40);
	add_node(&t1,88);
	add_node(&t1,98);
	add_node(&t1,45);
	add_node(&t1,15);
	add_node(&t1,78);
	add_node(&t1,3);
	printf("inorder:");preorder(t1.root);printf("\n");
	printf("postorder:");postorder(t1.root);printf("\n");
	printf("preoroder:");preorder(t1.root);printf("\n");

	printf("\nEnter the Value to search");
	scanf("%d",&key_value);
	if(find_node(&t1,key_value)!=NULL)
	{
		printf("\nElement found");
	}
	else
		printf("\nNot Found");
	printf("\nEnter the Value to delete");
	scanf("%d",&key_value);

	delete_element(&t1,key_value);
	printf("\n");
	printf("inorder:");preorder(t1.root);printf("\n");

	/*printf("\n");
	res=height(&t1);
	printf("\nHeight is %d",res);*/

	clear(t1.root);
	return EXIT_SUCCESS;
}
