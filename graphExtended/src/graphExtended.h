/*
 * graphExtended.h
 *
 *  Created on: 08-Sep-2018
 *      Author: sunbeam
 */

#ifndef GRAPHEXTENDED_H_
#define GRAPHEXTENDED_H_

#define MAX 20
#define INF 99

typedef struct graph
{
	int mat[MAX][MAX];
	int vert_cnt;
	int edge_cnt;
}graph_t;

void graph_init(graph_t *g);
void graph_accept(graph_t *g);
void graph_display(graph_t *g);
void graph_prim_mst(graph_t *g, int start);
void graph_dijsktra_spt(graph_t *g, int start);



#endif /* GRAPHEXTENDED_H_ */
