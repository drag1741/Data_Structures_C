/* File:main.c
   Author: Jay Drage

   Synapse:main.c to test list.c functionality
*/

#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "node.h"
#include "utility.h"

int main(int argc, char *argv[]){
    //initialize head of list
	enum Type type = integer;
	int data1 = 0;
	struct Node *node1 = init_Node(&data1, type);
	struct List *list = init_List(node1);

    /*****print list to stdout*****/
    fprintf(stderr,"***********Add Nodes************\n");
    fprintf(stderr,"********************************\n");
    list->print_list(list);
    fprintf(stderr,"********************************\n");
    
	int data2 = 1;
	struct Node *node2 = init_Node(&data2, type);
    list->add_node_end(list,node2);
    list->print_list(list);
    fprintf(stderr,"********************************\n");

	char data3 = 'M';
	struct Node *node3 = init_Node(&data3, monster);
    list->add_node_end(list,node3);
    list->print_list(list);
    fprintf(stderr,"********************************\n");

    fprintf(stderr,"**********Remove Nodes**********\n");
    fprintf(stderr,"********************************\n");
    list->remove_node_mid(list,node2);
    list->print_list(list);
    fprintf(stderr,"********************************\n");
    list->remove_node_mid(list,node1);
    list->print_list(list);
    fprintf(stderr,"********************************\n");
    list->remove_node_mid(list,node3);
    list->print_list(list);
    fprintf(stderr,"********************************\n");
    //delete list and exit
    list->delete_list(list);
    return 0;
}
