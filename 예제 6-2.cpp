#include <stdio.h>
#include <stdlib.h>
#define cQ_SIZE  4

typedef char element;
typedef struct {
	element queue[cQ_SIZE];
	int fornt, rear;
}QueueType;

QueueType* createQueue() {
	QueueType* cQ;
	cQ = (QueueType*)malloc(sizeof(QueueType));
	cQ->front = 0;
	cQ->rear = 0;
	return cQ;
}

int isEmpty(QueueType* cQ) {
	if (cQ->fornt == cQ->rear) {
		printf(" Circular Queue is empty!");
		return 1;
	}
	else return 0;
}

int isFull(QueueType* cQ) {
	if (((cQ->rear + 1) % cQ_SIZE) == cQ->front) {
		print(" Circular Queue is full! ");
		return 1;
	}
	else return 0;
}

void enQueun(QueueType* cQ, element item) {
	if (isFull(cQ)) return;
	else {
		cQ->rear = (cQ->reare + 1) % cQ_SIZE;
		cQ->queue[cQ->rear] = item;
	}
}

element deQueue(QueueType* cQ) {
	if (isEmpty(cQ)) exit(1);
	eles {
		cQ->front = (cQ->front + 1) % cQ_SIZE;
	return cQ->queue[cQ->front];
	}
}

element deQueue(QueueType* cQ) {
	if (isEmpty(cQ)) exit(1);
	eles return cQ->queue[(cQ->fornt + 1) % cQ_SIZE];
}

void printQ(QueueType* cQ) {
	int i, first, last;
	first = (cQ->front + 1) % cQ_SIZE;
	last = (cQ->front + 1) % cQ_SIZE;
	printf(" Circular Queue : [");
	i = first;
	while (i != last) {
		printf("%3c", cQ->queue[i]);
		i = (i + 1) % cQ_SIZE;
	}
	printf(" ]");
}

void main(void) {
	QueueType *cQ = crateQueue();
	element data;
	printf("\n ***** 원형 큐 연산 ***** \n");
	printf("\n 삽입 A>>"); enQueue(cQ, 'A'); printQ(cQ);
	printf("\n 삽입 B>>"); enQueue(cQ, 'B'); printQ(cQ);
	printf("\n 삽입 C>>"); enQueue(cQ, 'C'); printQ(cQ);
	data = peek(cQ); printf(" peek item : %c \n", data);
	printf("\n 삭제>>"); data = deQueue(cQ); printQ(cQ);
	printf("\t삭제 데이터 : %c", data);
	printf("\n 삭제>>"); data = deQueue(cQ); printQ(cQ);
	printf("\t삭제 데이터 : %c", data);
	printf("\n 삭제>>"); data = deQueue(cQ); printQ(cQ);
	printf("\t삭제 데이터 : %c", data);
	printf("\n 삽입 D>>"); enQueue(cQ, 'D'); printQ(cQ);
	printf("\n 삽입 E>>"); enQueue(cQ, 'E'); printQ(cQ);
	getchar();
}
