//link.c
//
//file to learn linked_lists in c

#include <stdio.h>
#include <stdlib.h>

struct List{
    //members
    void *node;//data type to hold nodes in list
    int data;
    struct List *head;//first link of list
    struct List *tail;//last link of list
    struct List *next;//next link in list
    struct List *prev;//previous link in list

    //Function pointers
    void (*add_link_end)(struct List*, int);
    void (*remove_element)(struct List*, int);
    void (*delete_list)(struct List*);
    void (*print_list)(struct List*);
    void (*bubble_sort)(struct List*);
};

//initialize list
struct List* init_list( int data );

//add a link to the end of link list starting at head
void add_link_end_imp(struct List *head, int new_data);

//remove element of list with list->data == data
void remove_element_imp( struct List* head, int data);

//delete list
void delete_list_imp(struct List *head);

//print list from head to tail
void print_list_imp(struct List *head);

//use bubble sort to sort list
void bubble_sort_imp(struct List *head);
