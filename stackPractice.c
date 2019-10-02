#include<stdio.h>
#include<stdlib.h>
# define CAPACITY 10
void push(int);
int isFull(void);
void pop(void);
int isEmpty(void);
void peek(void);
int stack[10];
int top = -1;

int main(void){
    int *stack;
    stack = (int *)calloc(CAPACITY, sizeof(int));
    push(10);
    push(20);
    push(30);
    peek();
    pop();
    peek();
    return 0;
}

void push(int ele){
    if(isFull()){
        printf("Overflow \n");
    }
    else{
        top ++ ;
        stack[top] = ele ;
    }
}

void pop(){
    if(isEmpty()){
        printf("Underflow \n");
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

void peek(){
    if(isEmpty()){
        printf("UNDERFLOW \n");
    }
    else{
        printf("Top element is : %d \n", stack[top]);
    }
}