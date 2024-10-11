#include<stdio.h>
#include<stdbool.h>
struct stack
{
    int *arr;
    int top;
    int size;
    
}typedef stack;

void push(int *arr,int top,int data){
    top++;
    arr[top] = data;
    
}
void pop(int *arr, int top){
    top--;
}
bool empty(int*arr, int top){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }

}
void printStack(stack s){
    int temp = s.top;
    while(temp!= -1){
        printf("%d",s.top);
        pop()
    }
}




int main(){ 
    int arr[10];
    int size = 10;
    int top = -1;

    stack s;
    
    
    
    return 0;
}