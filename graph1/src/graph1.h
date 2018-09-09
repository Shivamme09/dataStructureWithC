/*
 * graph1.h
 *
 *  Created on: 08-Sep-2018
 *      Author: sunbeam
 */

#ifndef GRAPH1_H_
#define GRAPH1_H_

#include <stdio.h>
#include "graph1.h"

//#include "queque.h"

#define MAX 20


//defining graph
typedef struct graph
{
	int mat[MAX][MAX];
	int vert_cnt;
	int edge_cnt;

}graph_t;

void init_graph(graph_t *g);//for initialising graph

void accept_graph(graph_t *g);//for accepting values to the graph

void display_graph(graph_t *g);

void graph_dfs_trav(graph_t *g,int start);

int graph_is_connected(graph_t *g);

void graph_path_length(graph_t *g, int start);
#endif /* GRAPH1_H_ */
