#include<stdio.h>
#include<stdlib.h>
void push(void);
void display(void);
void pop(void);
void peek(void);

struct node{
    int data;
    struct node *link;
};

struct node *root = NULL;

int main(){
    int option;
    while(1){
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. display\n");
        printf("4. peek\n");
        printf("5. Exit\n");
        printf("Enter your choice among the following : \n");
        scanf("%d", &option);

        switch(option){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: peek(); break;
            case 5: exit(0);
            default: printf("Invalid input\n");
        }
    }
    
    return 0;
}

void push(){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->link = NULL;
    printf("Enter the element to be pushed : \n");
    scanf("%d", &newnode->data);
    if(root == NULL){
        root = newnode;
        newnode->link = NULL;
    }
    else{
        newnode->link = root;
        root = newnode;
    }
}

void display(){
    if(root == NULL){
        printf("No elements\n");
    }
    else{
        struct node *ptr;
        ptr = root;
        while(ptr != NULL){
            printf("%d->", ptr->data);
            ptr = ptr->link;
        }
        printf("\n");
    }
}

void pop(){
    if(root == NULL){
        printf("UNDERFLOW \n");
    }
    else{
        struct node *ptr;
        ptr = root;
        root = ptr->link;
    }
}

void peek(){
    if(root == NULL){
        printf("UNDERFLOW \n");
    }
    else{
        printf("Top element is : %d\n", root->data);
    }
}