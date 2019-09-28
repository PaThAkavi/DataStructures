#include<stdio.h>
#include<stdlib.h>
# define CAPACITY 10
void push(int);
int isFull(void);
int stack[10];
int top = -1;

int main(void){
    int *stack;
    stack = (int *)calloc(CAPACITY, sizeof(int));

    return 0;
}

void push(int ele){
    if(isFull()){
        print("Overflow");
    }
    else{
        top ++ ;
        stack[top] = ele ;
    }
}

int isFull(){
    if(top == CAPACITY - 1){
        return 1;
    } 
    else{
        return 0;
    }
}