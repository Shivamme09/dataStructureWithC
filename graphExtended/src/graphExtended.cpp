//============================================================================
// Name        : graphExtended.cpp
// Author      : Shivam
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
   //Number:0230400056286513
   //Harsha Mishra
   //8435333377
//============================================================================
#include <stdio.h>
#include "graphExtended.h"

void graph_init(graph_t *g)
{
	int i, j;
	g->vert_cnt = 0;
	g->edge_cnt = 0;
	for(i=0; i<MAX; i++)
	{
		for(j=0; j<MAX; j++)
			g->mat[i][j] = INF;
	}
}

void graph_accept(graph_t *g)
{
	int i, from, to, wt;
	printf("Enter number of vertices : ");
	scanf("%d", &g->vert_cnt);
	printf("Enter number of edges : ");
	scanf("%d", &g->edge_cnt);
	for(i=0; i<g->edge_cnt; i++)
	{
		printf("Enter edge (from to wt): ");
		scanf("%d%d%d", &from, &to, &wt);
		g->mat[from][to] = wt;
		g->mat[to][from] = wt; // DEL this for Di-Graph.
	}
}

void graph_display(graph_t *g)
{
	int i, j;
	printf("\n");
	for(i=0; i<g->vert_cnt; i++)
	{
		for(j=0; j<g->edge_cnt; j++)
			g->mat[i][j] == INF ? printf("  ##") : printf("%4d", g->mat[i][j]);
		printf("\n");
	}
}

int find_min(int arr[], int mst[], int n)
{
	int i, min=INF, min_i=-1;
	for(i=0; i<n; i++)
	{
		if(mst[i] == 0 && arr[i] < min)
		{
			min = arr[i];
			min_i = i;
		}
	}
	return min_i;
}
void graph_prim_mst(graph_t *g, int start)
{
	int i, mst[MAX], key[MAX], parent[MAX], cur, to, mst_cnt=0;

	//1. init key of each vert=INF, each vert=non-mst, each vert parent=-1
	for(i=0; i < g->vert_cnt; i++)
	{
		key[i] = INF;
		mst[i] = 0;
		parent[i] = -1;
	}
	// start vertex key = 0
	key[start] = 0;

	while(mst_cnt < g->vert_cnt)
	{
		//2. pick vert with min key (not already added in mst) & add in mst.
		cur = find_min(key, mst, g->vert_cnt);
		mst[cur] = 1;
		mst_cnt++;

		for(to=0; to < g->vert_cnt; to++)
		{
			if(g->mat[cur][to] != INF) // check if adj vertex
			{
				//3. if cur edge weight is less than adj vert key.
				//DON'T MODIFY KEY IF VERT ALREADY ADDED IN MST --> mst[to] == 0
				if(mst[to] == 0 && g->mat[cur][to] < key[to])
				{
					// update key of adj vert & record its parent (as cur).
					key[to] = g->mat[cur][to];
					parent[to] = cur;
				}
			}
		}
	}//4. repeat for all vertices (to add in mst).

	// print MST
	printf("Prim's MST:\n");
	for(i=0; i<g->vert_cnt; i++)
		printf("%d -> %d\n", parent[i], i);
	printf("\n");
}

void graph_dijsktra_spt(graph_t *g, int start)
{
	int i, spt[MAX], dist[MAX], parent[MAX], cur, to, mst_cnt=0;

	//1. init dist of each vert=INF, each vert=non-spt, each vert parent=-1
	for(i=0; i < g->vert_cnt; i++)
	{
		dist[i] = INF;
		spt[i] = 0;
		parent[i] = -1;
	}
	// start vertex dist = 0
	dist[start] = 0;

	while(mst_cnt < g->vert_cnt)
	{
		//2. pick vert with min dist (not already added in spt) & add in spt.
		cur = find_min(dist, spt, g->vert_cnt);
		spt[cur] = 1;
		mst_cnt++;

		for(to=0; to < g->vert_cnt; to++)
		{
			if(g->mat[cur][to] != INF) // check if adj vertex
			{
				//3. if cur edge weight is less than adj vert dist.
				if(dist[cur] + g->mat[cur][to] < dist[to])
				{
					// update dist of adj vert & record its parent (as cur).
					dist[to] = dist[cur] + g->mat[cur][to];
					parent[to] = cur;
				}
			}
		}
	}//4. repeat for all vertices (to add in spt).

	// print distance
	printf("Shortest Distance From Vertex %d:\n", start);
	for(i=0; i<g->vert_cnt; i++)
		printf("%d -> %d\n", i, dist[i]);
	printf("\n");
}
