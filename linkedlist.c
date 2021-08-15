//
// Created by Yu Chen on 7/25/21.
//

#include <stdlib.h>

struct node_t {
    int data;
    struct node_t *next;
};

void list_insert(struct node_t **head, int data) {
    struct node_t *new = malloc(sizeof(struct node_t));
    new->data = data;

    // point the next pointer of the new node to the address of the old head

    new->next = *head;
    // set the new head to be the newly created node (set the address of head to be the address of new)
    *head = new;
}