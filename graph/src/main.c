#include <stdio.h>
#include "graph.h"

int main()
{
	graph_t g;
	graph_init(&g);
	graph_accept(&g);
	graph_display(&g);
	graph_prim_mst(&g, 0);
	graph_dijsktra_spt(&g, 0);
	return 0;
}

/*
Input:
9
14
0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 5 4
2 8 2
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7
*/


