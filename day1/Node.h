#pragma once

struct data{
    int value;
    int counter;
};

struct Node{
    struct data Datum;
    struct Node* next;
};

struct Node* find(int value, struct Node* L);
struct Node* add2back(int value, struct Node* L);
void printList(struct Node*L);