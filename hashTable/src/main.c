/*
 * main.c
 *
 *  Created on: 09-Sep-2018
 *      Author: sunbeam
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashTable.h"

int main(void)
{
	/*list_t s;
	list_init(&s);
	list_add(&s,1,"Shivam");
	list_add(&s,2,"Aniket");
	//display(&s);
	//printf("\nfound",list_find(&s,2));*/
		hashtable_t ht;
		char *name;

		ht_init(&ht);
		put_ht(&ht, 40, "D");
		put_ht(&ht, 23, "A");
		put_ht(&ht, 13, "E");
		put_ht(&ht, 53, "G");
		put_ht(&ht, 26, "B");
		put_ht(&ht, 36, "F");
		put_ht(&ht, 39, "C");
		put_ht(&ht, 53, "X");
		name = get_ht(&ht, 53);
		printf("name : %s\n", name);
		name = get_ht(&ht, 26);
		printf("name : %s\n", name);
		name = get_ht(&ht, 40);
		printf("name : %s\n", name);
	return EXIT_SUCCESS;
}
