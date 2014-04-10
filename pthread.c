/* A simple thread example using POSIX Thread */

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<string.h>

//function declaration for thread routine
void printMessage(void *ptr);

// structure to hold data to be passed to a thread
typedef struct threadData{
    int threadNo;
    char message[50];
}thdata;

int main(){
    pthread_t thread1,thread2;
    thdata data1,data2;
    
    exit(0);
}

void printMessage(void *ptr){
    
    pthread_exit(0);
}