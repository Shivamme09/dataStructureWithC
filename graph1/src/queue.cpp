/*
#include "queue.h"

void queue_init(queue_t *pq)
{
	pq->front = -1;
	pq->rear = -1;
	pq->count = 0;
}

int queue_isempty(queue_t *pq)
{
	return (pq->count == 0);
}

int queue_isfull(queue_t *pq)
{
	return ( pq->count == Q_SIZE);
}

void queue_push(queue_t *pq, int ele)
{
	pq->count++;
	pq->rear = (pq->rear + 1) % Q_SIZE;
	pq->arr[ pq->rear ] = ele;
}

int queue_pop(queue_t *pq)
{
	pq->count--;
	pq->front = (pq->front + 1) % Q_SIZE;
	return pq->arr[pq->front];
}

int peek_element(queue_t *pq)
{
	int next = (pq->front + 1) % Q_SIZE;
	return (pq->arr[next]);
}

*/
