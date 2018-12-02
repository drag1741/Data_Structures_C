//utility.c
//
//adds simple utility functions

#include <stdio.h>

//check if arguments provided
int check_args(int argc, char *argv[]){
    if(argc <2){
        printf("[usage] %s  <arguments>\n",argv[0]);
        return 1;
    }
    return 0;
}
