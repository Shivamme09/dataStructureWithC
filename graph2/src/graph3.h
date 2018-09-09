/*
 * graph3.h
 *
 *  Created on: 09-Sep-2018
 *      Author: sunbeam
 */

#ifndef GRAPH3_H_
#define GRAPH3_H_

#define MAX 20
#define INF 9999

typedef struct graph
{
	int mat[MAX][MAX];
	int vert_cnt;
	int edge_cnt;
}graph_t;


void graph_init(graph_t *g);
void graph_accept(graph_t *g);
void graph_display(graph_t *g);
void graph_bellaman_ford(graph_t *g, int start);
void graph_warshall_floyd(graph_t *g);


#endif /* GRAPH3_H_ */
