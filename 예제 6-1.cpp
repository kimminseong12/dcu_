#include <stdio.h>
#include <stdlib.h>
#define Q_SIZE 4

typedef char element;
typedef struct {
	element queue[Q_SIZE];
	int front, rear;
} QueueType;

QueueType* crateQueue() {
	QueueType* Q;
	Q = (QueueType*)malloc(sizeof(QueueType));
	Q->front = -1;
	Q->rear = -1;
	return Q;
}

int isEmpty(QueueType* Q) {
	if (Q->front == Q->rear) {
		printf("Queue is full!");
		return 1;
	}
	else return 0;
}

void enQueue(QueueType* Q, element item) {
	if (isFull(Q)) return;
	else {
		Q->rear++;
		Q->queue[Q->rear] = item;
	}
}

element deQueue(QueueType* Q) {
	if (isEmpty(Q)) return;
	else {
		Q->front++;
		return Q->queue[Q->front];
	}
}

element peek(QueueType* Q) {
	if (isEmpty(Q)) exit(1);
	else return Q->queue[Q->front + 1];
}

void printQ(QueueType* Q) {
	int i;
	printf("Queue : [");
	for (i = Q->front + 1; i <= Q->rear; i++)
		printf("%3c", Q->queue[i]);
	printf(" ]");
}

void main(void) {
	QueueType * 01 = crateQueue();
	element data;
	printf("\n ***** 순차 큐 연산 ***** \n");
	printf("\n 삽입 A>>"); enQueue(01, 'A'); printQ(Q1);
	printf("\n 삽입 B>>"); enQueue(01, 'B'); printQ(Q1);
	printf("\n 삽입 C>>"); enQueue(01, 'C'); printQ(Q1);
	data = peek(Q1); printf(" peek item : %c \n", data);
	printf("\n 삭제>>"); data = deQueue(Q1); printQ(Q1);
	printf("\t삭제 데이터 : %c",data);
	printf("\n 삭제>>"); data = deQueue(Q1); printQ(Q1);
	printf("\t삭제 데이터 : %c", data);
	printf("\n 삭제>>"); data = deQueue(Q1); printQ(Q1);
	printf("\t삭제 데이터 : %c", data);

	printf("\n 삽입 D>>"); enQueue(01, 'D'); printQ(Q1);
	printf("\n 삽입 E>>"); enQueue(01, 'E'); printQ(Q1);
	getchar();
}
