//link.h
//
//file to implement doubly linked lists in c

#include <stdio.h>
#include <stdlib.h>

#include "node.h"

struct List{
    //members
    struct Node *head;

    //Function pointers
    void (*add_node_end)(struct List*, int);
    void (*remove_element)(struct List*, int);
    void (*delete_list)(struct List*);
    void (*print_list)(struct List*);
    void (*bubble_sort)(struct List*);
};

//initialize list
struct List* init_list( int data );

//add a node to the end of list starting at head
void add_node_end_imp(struct List *head, int new_data);

//remove element of list with list->data == data
void remove_element_imp( struct List* head, int data);

//delete list
void delete_list_imp(struct List *head);

//print list from head to tail
void print_list_imp(struct List *head);

//use bubble sort to sort list
void bubble_sort_imp(struct List *head);
