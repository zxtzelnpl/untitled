#include <stdio.h>
#include "Stack.h"
#include "Queue.h"

typedef struct BiTnode{
    int data;
    struct BiTnode *lchild,*rchild;
}BiTnode,*BiTree;

void PreOrder(BiTree root){
    if(root!=NULL){
        printf("%d",root->data);
        PreOrder(root->lchild);
        PreOrder(root->rchild);
    }
}

void InOrder(BiTree root){
    if(root!=NULL){
        InOrder(root->lchild);
        printf("%d",root->data);
        InOrder(root->rchild);
    }
}

void PostOrder(BiTree root){
    if(root!=NULL){
        PostOrder(root->lchild);
        PostOrder(root->rchild);
        printf("%d",root->data);
    }
}

int InOrderTraverse(BiTree root){
   BiTree p;
   InitStack(St);
   p = root;
   while(p!=NULL||!isEmpty(St)){
       if(p!=NULL){
           Push(St,p);
           p = p->lchild;
       }
       else{
           q = Top(St);
           Pop(St);
           printf("%d",q->data);
           p = q->rchild;
       }
   }
}

void LevelOrder(BiTree root){
    BiTree p;
    InitQueue(Q);
    EnQueue(Q,root);
    while(!isEmpty(Q)){
        DelQueue(Q,p);
        printf("%d",p->data);
        if(p->lchild) EnQueue(Q,p->lchild);
        if(p->rchild) EnQueue(Q,p->rchild);
    }
}
