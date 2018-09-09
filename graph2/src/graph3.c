/*
 ============================================================================
 Name        : graph2.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "graph3.h"

void graph_init(graph_t *g)
{
	int i,j;
	g->vert_cnt=0;
	g->edge_cnt=0;
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
			g->mat[i][j]=INF;
		}
	}
}

void graph_accept(graph_t *g)
{
	int i,j,wt,to,from;
	printf("\nEnter the number of Vertices");
	scanf("%d",g->vert_cnt);
	printf("\nEnter the number of Edges");
	scanf("%d",g->edge_cnt);
	for(i=0;i<g->edge_cnt;i++)
	{
		printf("Enter edge (from to wt): ");
		scanf("%d%d%d", &from, &to, &wt);
		g->mat[from][to] = wt;
	}
}

void graph_display(graph_t *g)
{
	int i,j;
	for(i=0;i<g->vert_cnt;i++)
		{
			for(j=0;j<g->vert_cnt;j++)
			{
			 g->mat[i][j]=INF?printf("##\t"):printf("%d\t",g->mat[i][j]);
			 printf("\n");
			}
		}
}
