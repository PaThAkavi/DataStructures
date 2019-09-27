#include<stdio.h>
#include<stdlib.h>

# define CAPACITY 5
int top = -1;
int stack[CAPACITY];
void push(int);
int pop(void);
int peek(void);
int isEmpty(void);
int isFull(void);
void traverse(void);

int main(void){
    int *stack;
    stack = (int*)calloc(CAPACITY, sizeof(int));

    while(1){

    int choice;
    printf("Please enter your choice : \n");
    printf("1. push \n");
    printf("2. pop \n");
    printf("3. peek \n");
    printf("4. traverse \n");
    printf("5. Quit \n");

    printf("Please selecet your choice : \n");
    scanf("%d", &choice);
    int ele;

    switch(choice){
        case 1 : printf("Enter element to be pushed : \n");
                    scanf("%d", &ele);
                    push(ele);
                    break;
        case 2 : printf("%d has been popped. \n", pop());
                 break;
        case 3 : printf("top element is %d. \n", peek());
                 break;
        case 4 : traverse();
                 break;
        case 5 : exit(0);
        default : printf("Invalid Input. \n");
    }
    }
    return 0;
}

void push(int ele){
    if(isFull()){
        printf("Overflow \n");
    } else{
        top ++ ;
        stack[top] = ele;
    }
}

int pop(){
    if(isEmpty()){
        printf("Underflow \n");
    } else{
        return stack[top--];
    }
}

int peek(){
    if(isEmpty()){
        printf("Underflow \n");
    } else{
        return stack[top];
    }
}

void traverse(){
    if(isEmpty()){
        printf("Underflow \n");
    } else{
        int i;
        for(i = 0; i <= top; i++){
            printf("%d \n", stack[i]);
        }
    }
}

int isEmpty(){
    if(top == -1){
        return 1 ;
    } else{
        return 0;
    }
}

int isFull(){
    if(top == CAPACITY - 1){
        return 1 ;
    } else{
        return 0;
    }
}