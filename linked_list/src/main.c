/* File:main.c
   Author: Jay Drage

   Synapse:main.c to test list.c functionality
*/

#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "utility.h"

int main(int argc, char *argv[]){
    //initialize head of list
    int node_data = 0;
    struct List *list = init_List(&node_data);
    //create list nodes
    int run = 1;
    int input = 0;
    while(run){
        printf("add:1  remove:2  end:0  :[0] ");
        scanf("%d", &input);
        if(input == 1){//add node
            printf("add node: ");
            scanf("%d", &node_data); 
			list->add_node_end(list, &node_data);
        }
        else if(input == 2){//delete node
            printf("remove node: ");
            scanf("%d", &node_data); 
        }
        else if(input == 0){//exit program
            run = 0;
        }
		list->print_list(list);
    }
    //delete list and exit
    return 0;
}
