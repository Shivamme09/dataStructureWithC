/*
 * queque.h
 *
 *  Created on: 08-Sep-2018
 *      Author: sunbeam
 */

#ifndef QUEQUE_H_
#define QUEQUE_H_
#define Q_SIZE 40
typedef struct
{
	int arr[Q_SIZE];
	int front, rear;
	int count;
}queue_t;

void queue_init(queue_t *pq);
int queue_isempty(queue_t *pq);
int queue_isfull(queue_t *pq);
void queue_push(queue_t *pq, int ele);
int queue_pop(queue_t *pq);
int queue_peek(queue_t *pq);

#endif /* QUEQUE_H_ */
