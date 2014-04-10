/* A simple thread example using POSIX Thread */

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

//function declaration for thread routine
void printMessage(void *ptr);

// structure to hold data to be passed to a thread
typedef struct threadData{
    int threadNo;
    char message[50];
}thdata;

int main(){
    
    return 0;
    
}