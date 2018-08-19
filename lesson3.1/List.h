#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}
        NODE,
        *LinkList;

LinkList Find_List(LinkList L, int k) {
    LinkList p;
    int i;
    i = 1;
    p = L->next;
    while (p && i < k) {
        p = p->next;
        i++;
    }
    if (p && i == k) return p;
    return NULL;
}

int Insert_List(LinkList L, int k, int newElem) {
    LinkList p, s;
    if (k == 1) p = L;
    else p = Find_List(L, k - 1);
    if(!p) return -1;
    s=(NODE *)malloc(sizeof(NODE));
    if(!s) return -1;
    s->data = newElem;
    s->next = p->next;
    p->next = s;
    return 0;
}

int Delete_List(LinkList L,int k){
    LinkList p,q;
    if(k==1) p=L;
    else p=Find_List(L,k-1);
    if(!p||!p->next) return -1;
    q=p->next;
    p->next = q->next;
    free(q);
    return 0;
}