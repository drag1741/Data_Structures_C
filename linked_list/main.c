//linked_list.c
//
//file to learn linked_lists in c

#include <stdio.h>
#include <stdlib.h>
#include "link.h"
#include "utility.h"

int main(){
    //initialize head of list
    struct List *head;
    head = init_list(0);
    //create list nodes
    int run = 1;
    int node_data = 0;
    int input = 0;
    while(run){
        printf("add:1  remove:2  end:0  :[0] ");
        scanf("%d", &input);
        if(input == 1){//add node
            printf("add node: ");
            scanf("%d", &node_data); 
            head->add_link_end(head,node_data);
        }
        else if(input == 2){//delete node
            printf("remove node: ");
            scanf("%d", &node_data); 
            head->remove_element(head,node_data);
        }
        else if(input == 0){//exit program
            run = 0;
        }
        head->print_list(head);
    }
    //delete list and exit
    head->delete_list(head);
    return 0;
}
