/*
 * main.c
 *
 *  Created on: 08-Sep-2018
 *      Author: sunbeam
 */

#include <stdio.h>
#include <stdlib.h>
#include "graph1.h"
#include "stack.h"
#include "queue.h"

int main(void)
{
	graph_t t;
	int res;
	init_graph(&t);
	accept_graph(&t);
	display_graph(&t);
	graph_dfs_trav(&t,0);
	res=graph_is_connected(&t);
	(res>0)?printf("\nConnected"):printf("\nNot Connected");
	graph_path_length(&t,0);
	return EXIT_SUCCESS;
}
