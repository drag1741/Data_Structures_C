/* File:list.h
   Author:Jay Drage
   
   Synapse:file to implement doubly linked lists in c
*/

#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

#include "node.h"

struct List{
    //members
    struct Node *head;
    struct Node *tail;
	int size;

    //Function pointers
    void (*add_node_end)(struct List*, struct Node*);
    void (*remove_element)(struct List*, void*);
    void (*delete_list)(struct List*);
    void (*print_list)(struct List*);
};

//initialize list
struct List* init_List(struct Node *node);

//add a node to the end of list starting at head
void add_node_end_imp(struct List *list, struct Node *node);

//remove element of list with list->data == data
void remove_element_imp( struct List* head, void *data);

//delete list
void delete_list_imp(struct List *head);

//print list from head to tail
void print_list_imp(struct List *head);

#endif
