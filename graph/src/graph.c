//============================================================================
// Name        : graph.cpp
// Author      : Shivam
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include "graph.h"

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
		printf("\nEnter edge (from to wt): ");
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

int find_min(int arr[],int mst[],int n)
{
	int i,min=INF,min_i=-1;
	for(i=0;i<n;i++)
	{
		if(mst[i]==0 && arr[i]<min)
		{
			min=arr[i];
			min_i=i;
		}
	}
	return min_i;
}

void graph_prim_mst(graph_t *g, int start)
{
	int i,mst[MAX],parent[MAX],key[MAX],cur, to, mst_cnt=0;
	for(i=0; i < g->vert_cnt; i++)
		{
			key[i] = INF;
			mst[i] = 0;
			parent[i] = -1;
		}
	key[start]=0;
	while(mst_cnt < g->vert_cnt)
	{
		cur = find_min(key, mst, g->vert_cnt);
		mst[cur] = 1;
		mst_cnt++;
		for(to=0; to < g->vert_cnt; to++)
		{
			if(g->mat[cur][to] != INF)
			{

			if(mst[to] == 0 && g->mat[cur][to] < key[to])
			{
				key[to] = g->mat[cur][to];
				parent[to] = cur;
			}

			}
		}
	}
		printf("\nPrim's MST:\n");
		for(i=0; i<g->vert_cnt; i++)
		printf("%d -> %d\n", parent[i], i);
		printf("\n");
}

void graph_dijsktra_spt(graph_t *g, int start)
{
	int i,spt[MAX],parent[MAX],dist[MAX],cur, to, mst_cnt=0;
	for(i=0; i < g->vert_cnt; i++)
		{
			dist[i] = INF;
			spt[i] = 0;
			parent[i] = -1;
		}
	dist[start]=0;
	while(mst_cnt < g->vert_cnt)
	{
		cur = find_min(dist, spt, g->vert_cnt);
		spt[cur] = 1;
		mst_cnt++;
		for(to=0; to < g->vert_cnt; to++)
		{
			if(g->mat[cur][to] != INF)
			{

			if(spt[to] == 0 && g->mat[cur][to] < dist[to])
			{
				dist[to] = dist[cur] + g->mat[cur][to];
				parent[to] = cur;
			}

			}
		}
	}
		printf("\nDJIK's MST:\n");
		for(i=0; i<g->vert_cnt; i++)
		printf("%d -> %d\n", i,dist[i]);
		printf("\n");
}
