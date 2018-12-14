/* File:node.c
   Author: Jay Drage

   Synapse:node struct for data structures
*/

#include <stdio.h>
#include <stdlib.h>

#include "node.h"

//init a new Node with void *data == data
struct Node* init_Node(void *data, enum Type type){
	//allocate memory
	struct Node *ret_value = NULL;
	ret_value = malloc(sizeof(struct Node));
	//set data
	ret_value->prev = NULL;
	ret_value->next = NULL;
	ret_value->data = data;
	ret_value->index = 0;
	ret_value->type = type;
	//return
	return ret_value;
}
