/*
 ============================================================================
 Name        : graph1.c
 Author      : Shivam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include "graph1.h"
#include "stack.h"
#include "queue.h"

void init_graph(graph_t *g)
{
	int i,j;
	g->vert_cnt=0;
	g->edge_cnt=0;
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
			g->mat[i][j]=0;
		}
	}
}

void accept_graph(graph_t *g)
{
	int i,from,to;
	printf("\nEnter the number of Vertices");
	scanf("%d",&g->vert_cnt);
	printf("\nEnter the number of Edges");
	scanf("%d",&g->edge_cnt);
	for(i=0;i<g->edge_cnt;i++)
	{
		printf("\n Enter the Values [FROM] [TO]");
		scanf("%d%d",&from,&to);
		g->mat[from][to]=1;
		g->mat[to][from]=1;
	}
}

void display_graph(graph_t *g)
{
	int i,j;
	printf("\n");
	for(i=0;i < g->vert_cnt;i++)
	{
		for(j=0;j < g->vert_cnt;j++)
		{
			printf("%4d", g->mat[i][j]);

		}
		printf("\n");
	}

}

void graph_dfs_trav(graph_t *g,int start)
{
	int i,to,trav,visited[MAX];
	stack_t s;//used for implementing stack
	stack_init(&s);
	for(i=0;i< g->vert_cnt;i++)
	{
		visited[i]=0;
	}
	stack_push(&s,start);
	visited[start]=1;
	printf("\nDFS:");
	while(!stack_isempty(&s))
	{
		//peform pop
		trav=stack_pop(&s);
		//print the value
		printf("%d\t",trav);
		//check for visited value and trav
		for(to=0;to< g->vert_cnt;to++)
		{
			if(g->mat[trav][to]==1 && visited[to]==0)
			{
				stack_push(&s,to);
				visited[to]=1;
			}
		}

	}printf("\n");
}

int graph_is_connected(graph_t *g)
{
	int i,to,trav,visited[MAX];
	int visited_cnt=0;
	int start=0;
	stack_t s;
	stack_init(&s);
	for(i=0;i< g->vert_cnt;i++)
	{
		visited[i]=0;
	}
	stack_push(&s,start);
	visited[start]=1;
	visited_cnt++;//increment count as we have to visit every vertices

	while(! stack_isempty(&s))
	{
		trav=stack_pop(&s);
		for(to=0;to<g->vert_cnt;to++)
		{
			if(g->mat[trav][to]==1 && visited[to]==0)
			{
				stack_push(&s,to);
				visited[to]=1;
				visited_cnt++;
				if(visited_cnt == g->vert_cnt)
				{
					return 1;
				}
			}

		}
	}
	return 0;
}

void graph_path_length(graph_t *g, int start)
{
	int i, to, trav, visited[MAX], dist[MAX];
	queue_t s;
	// init queue & all vertices as non-visited.
	queue_init(&s);
	for(i=0; i<g->vert_cnt; i++)
		visited[i] = 0;
	//1. push start vertex & mark it as visited & dist of start=0
	queue_push(&s, start);
	visited[start] = 1;
	dist[start] = 0;
	while(!queue_isempty(&s))
	{
		//2. pop a vertex from queue
		trav = queue_pop(&s);
		//4. push its all non-visited adjacent vertices on queue & mark as visited & update dist of to
		for(to=0; to < g->vert_cnt; to++)
		{
			if(g->mat[trav][to] == 1 && visited[to] == 0)
			{
				queue_push(&s, to);
				visited[to] = 1;
				dist[to] = dist[trav] + 1;
			}
		}
	}//5. repeat steps 2-4 until queue is empty

	printf("Distance From %d: \n", start);
	for(i=0; i<g->vert_cnt; i++)
		printf("vertex %d -- dist %d\n", i, dist[i]);
	printf("\n");
}
