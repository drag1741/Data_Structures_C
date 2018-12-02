//link.c
//
//file to learn linked_lists in c

#include <stdio.h>
#include <stdlib.h>
#include "link.h"

//initialize list
struct List* init_list( int data){
    struct List *ret_value;
    ret_value = malloc(sizeof(struct List));
    //set members
    ret_value->data = data; 
    ret_value->next = NULL;
    ret_value->prev = NULL;
    //Function pointers
    ret_value->add_link_end = &add_link_end_imp;
    ret_value->remove_element = &remove_element_imp;
    ret_value->delete_list = &delete_list_imp;
    ret_value->print_list = &print_list_imp;
    ret_value->bubble_sort = &bubble_sort_imp;

    return ret_value;
}
//add a link to the end of link list starting at head
void add_link_end_imp(struct List *head, int new_data){
    struct List *temp = head;
    //initialize new Link
    struct List *new_Link;
    new_Link = malloc(sizeof(struct List));
    new_Link->next = NULL;
    new_Link->data = new_data;
    //find last link in list
    while(temp->next != NULL){
        temp = temp->next;
    }
    //add new_link to end of list
    temp->next = new_Link; 
}
//remove element of list with list->data == data
void remove_element_imp( struct List* node, int data){
    struct List *next_node = node->next;
    while( next_node != NULL ){
        if( next_node->data == data){
           node->next = next_node->next;
           free(next_node);
            break;
        }
        else{
            node = node->next;
            next_node = next_node->next;
        }
    }
}
//delete list
void delete_list_imp(struct List *head){
    struct List *temp = head;
    while(temp){
        temp = head->next;
        free(head);
        head = temp;
    }
}
//print list from head to tail
void print_list_imp(struct List *head){
    //print list from head to tail
    struct List *temp = head;
    if(temp == NULL) 
        printf("List is empty\n");
    else{
        while(temp){
            printf("%4d",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
//use bubble sort to sort list
void bubble_sort_imp(struct List *head){
    struct List *temp;
    temp = head;
}
