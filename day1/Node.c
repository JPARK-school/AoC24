#include "Node.h"
#include <stdlib.h>
#include <stdio.h>

struct Node* find(int value, struct Node* L){
    if(L == 0){
        printf("add2back called\n");
        L = add2back(value, L);
        return L;
    }
    else{
        if(value == L->Datum.value){
            printf("value %d found\n", value);
            L->Datum.counter++;
        }
        else{
            L->next = find(value, L->next);
        }
        return L;
    }
}

struct Node* add2back(int value, struct Node* L){
    if(L == 0){ //identifier NULL is undefined error, use 0 instead
        struct data datum = {value, 1};
        struct Node newNode = {datum, 0};
        return &newNode;
    }
    else{
        printf("adding...\n");
        L->next = add2back(value, L->next);
        return L;
    }
}

void printList(struct Node*L){
    if(L == 0){
        printf("Done printing.\n");
    }
    else{
        printf("Value: %d, number of times present: %d.\n", L->Datum.value, L->Datum.counter);
        printList(L->next);
    }
}