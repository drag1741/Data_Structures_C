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
	int data = 0;
	struct Node *node = init_Node(&data, type);
	struct List *list = init_List(node);
    //delete list and exit
    return 0;
}
