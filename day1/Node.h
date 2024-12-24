#pragma once

struct Node{
    int value;
    int counter;
    struct Node* next;
};

struct Node* find(int value, struct Node* L);
struct Node* add2back(struct Node* L);