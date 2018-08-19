#include <stdio.h>
#include <memory.h>

#include "lesson3.1/hello.h"
#include "lesson3.1/pointer.h"
#include "lesson3.1/List.h"

int main() {
//    hello();
//    pointer();



    printf("begin\n");

    int *p;
    int number = 2;
    p = &number;
    printf("number value : %d\n", number );
    printf("number address : %p\n", &number );
    printf("p value : %d\n", *p );
    printf("p address : %p\n", p );

    printf("finish\n");


    struct node Node1;
    struct node Node2;
    struct node Node3;

    Node1.data = 11;
    Node1.next = &Node2;

    Node2.data = 22;
    Node2.next = &Node3;

    Node3.data = 33;






    return 0;
}