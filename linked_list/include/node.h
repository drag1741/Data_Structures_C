/* File:node.h
*  Author:Jay Drage
*
*  Synapse:node struct for data structures 
*/

#ifndef NODE_H
#define NODE_H

struct Node{
	//members
    void *prev;
    void *next;
    void *data;
	int data_type;
	
	//functions
};

//init a new Node with void *data == data
struct Node* init_Node(void* data, int data_type);

#endif
