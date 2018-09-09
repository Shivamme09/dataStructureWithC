/*
 * main.c
 *
 *  Created on: 07-Sep-2018
 *      Author: sunbeam
 */
#include <stdio.h>
#include "treeSelf.h"

int main()
{
	tree_t t;
	init_tree(&t);
	add_node(&t, 1);
	add_node(&t, 2);
	add_node(&t, 3);
	add_node(&t, 4);
	add_node(&t, 5);
	add_node(&t, 6);
	add_node(&t, 7);
	printf("PRE: "); preorder(t.root); printf("\n");
	clear(t.root);
	return 0;
}
