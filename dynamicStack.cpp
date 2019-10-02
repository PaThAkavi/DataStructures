#include<iostream>
using namespace std;
bool isEmpty();
bool isFull();
void push(int);
void pop();
void peek();

class Stack{
    int totalSize;
    int * stack;
    int top;

    public:

    Stack(int size){
        this->totalSize = size;
        this->stack = new int[this->totalSize];
        this->top = -1;
    }

    bool isEmpty(){
        return this->totalSize = 0;
    }

    bool isFull(){
        return this->top = this->totalSize-1;
    }

    void push(int ele){
        if(isFull()){
            cout << "OVERFLOW" <<endl;
        }
        else{
            top += 1;
            this->stack[this->top] = ele;
        }
    }

    void pop(){
        if(isEmpty()){
            cout << "UNDERFLOW" << endl;
        }
        else{
            int x;
            x = this->stack[top];
            top -= 1;
        }
    }

    void peek(){
        if(isEmpty()){
            cout << "UNDERFLOW" <<endl;
        }
        else{
            cout << "Top value is : " << this->stack[top] << endl;
        }
    }
};

int main(){
    Stack stk(5);
    stk.push(10);
    stk.push(20);
    stk.peek();
    return 0;
}

