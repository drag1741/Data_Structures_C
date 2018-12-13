/* File:list.c
   Author:Jay Drage
   
   Synapse:file to implement doubly linked lists in c
*/

#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "node.h"

//initialize list
struct List* init_List( void *data){
    struct List *ret_value;
    ret_value = malloc(sizeof(struct List));
    //set members
    ret_value->head = init_Node(data);
	ret_value->tail = ret_value->head;
	ret_value->size = 1;
    //Function pointers
	ret_value->add_node_end = &add_node_end_imp;
	ret_value->remove_element = &remove_element_imp;
	ret_value->delete_list = &delete_list_imp;
	ret_value->print_list = &print_list_imp;
	ret_value->bubble_sort = &bubble_sort_imp;
	//return
	return ret_value;
}
//add a node to the end of list starting at head
void add_node_end_imp(struct List *list, void *data){
}
//remove element of list with list->data == data
void remove_element_imp( struct List* node, void *data){
}
//delete list
void delete_list_imp(struct List *head){
}
//print list from head to tail
void print_list_imp(struct List *list){
	struct Node *node = list->head;
	while(node != NULL){
		fprintf(stdout,"%d\n",*(int*)(node->data));
		node = node->next;
	}
}
//use bubble sort to sort list
void bubble_sort_imp(struct List *head){
}