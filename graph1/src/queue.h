#ifndef QUEUE_H_
#define QUEUE_H_

#define Q_SIZE 20

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

#endif /* STACK_H_ */
