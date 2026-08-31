// write a program to for stack using queue
// step1 insert element in queue2
// step2 move all element from queue 1 to queue2
// step3 copy all element from queue2 to queue1
// step4 reset Queue2
#include <stdio.h>
#define MAX 10
void push(int queue1[],int *front1,int *rear1,int queue2[],int *front2,int *rear2,int value){
    if (*rear1==MAX-1){
        printf("Underflow");
    }
    if(front1==-1){
        front1 = 1;
    }
    (*rear2)++;
    queue2[*rear2] = value;

    
}