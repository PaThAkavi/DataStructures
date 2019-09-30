#include<stdio.h>
#include<stdlib.h>
# define CAPACITY 10
void push(int);
int isFull(void);
void pop(void);
int isEmpty(void);
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

void popp(){
    if(isEmpty()){
        printf("Underflow");
    } 
    else{
        int x;
        x = stack[top];
        top -- ;
    }
}

int isEmpty(){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
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