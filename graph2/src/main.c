/*
 * main.c
 *
 *  Created on: 09-Sep-2018
 *      Author: sunbeam
 */

#include <stdio.h>
#include "graph3.h"

int main()
{
	graph_t g;
	graph_init(&g);
	graph_accept(&g);
	graph_display(&g);
	//graph_bellaman_ford(&g, 0);
	//graph_warshall_floyd(&g);
	return 0;
}

/*
Input:
5
8
0	3	6
1 	2	-3
1	4	-2
2	0	3
2	1	5
2	4	4
3	1	3
4	1	2
*/
