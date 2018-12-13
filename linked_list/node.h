/* File:node.h
*  Author:Jay Drage
*
*  Synapse:node struct for list
*/

#ifndef NODE_H
#define NODE_H

struct Node{
    void *head;
    void *prev;
    void *next;
    void* data;
};

#endif
