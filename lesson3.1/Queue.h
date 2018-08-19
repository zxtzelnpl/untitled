#include <stdlib.h>

#define MAXQSIZE 100
typedef struct {
    int *base;
    int front;
    int rear;
} SqQueue;

int InitQueue(SqQueue *Q){
    Q->base = (int *)malloc(MAXQSIZE*sizeof(int));
    if(!Q->base)return -1;
    Q->front = 0;
    Q->rear = 0;
    return 0;
}

int EnQueue(SqQueue *Q, int e)
{
    if((Q->rear+1)%MAXQSIZE == Q->front) return -1;
    Q->base[Q->rear] = e;
    Q->rear = (Q->rear+1)%MAXQSIZE;
    return 0;
}

int DelQueue(SqQueue *Q, int *e){
    if(Q->rear == Q->front) return -1;
    *e = Q->base[Q->front];
    Q->front = (Q->front+1)%MAXQSIZE;
    return 0;
}

int isEmpty(SqQueue *Q){

}

SqQueue* Q;