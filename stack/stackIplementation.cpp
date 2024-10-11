// #include<iostream>
// // #include<stack>
// using namespace std;

// class Stack{
//     public:
//     int *arr;
//     int top;
//     int size;

//     Stack(int size){
//         arr = new int(size);
//         top = -1;
//         this->size = size;
//     }

//     bool empty(){
//         if(top == -1){
//             // cout<<"stack is empty";
//             return true;
//         }
//         else{
//             // cout<<"stack is not empty";
//             return false;
//         }
//     }

//     void push(int data){
//         if(top == size-1){
//             cout<<"Stack overflow ";
//         }
//         else{
//             top++;
//             arr[top] = data;
//         }
//     }

//     void pop(){
//         if(top == -1){
//             cout<<"stack underflow ";
//         }
//         else{
//             top--;
//         }
//     }

//     int gettop(){
//         if(top == -1){
//             cout<<"stack is empty";
//             return 0;
//         }
//         else{
//             return arr[top];
//         }
//     }
//     int getsize(){
//         return top+1;
//     }
//     void print(){
//         for(int i = 0; i<getsize(); i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// int getmid(Stack &st){
    
// }
// int main(){

// // stack<int> st;
// Stack st(5);
// st.push(5);
// st.push(10);
// st.push(15);
// st.push(20);

// st.print();
// // cout<<"top = : "<<st.gettop()<<endl;
// // cout<<"size : "<<st.getsize()<<endl<<endl;
// // st.pop();
// // st.print();
// // cout<<"top = : "<<st.gettop()<<endl;
// // cout<<"size : "<<st.getsize()<<endl<<endl;

// // while(!st.empty()){
// //     cout<<st.gettop()<<" ";
// //     st.pop();
// // }

// //     return 0;
// return 0;
// }

#include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std; 

// class stack{
//     public:
//         char *arr;
//         int top;
//         int size;

//         stack(int size){
//             arr = new char[size];
//             this->size = size;
//             this->top = -1;
//         }
//         void push(int data){
//            if(top == size){
//             cout<<"Stack is full Overflow Condition Occure"<<endl;
//            }else{
//             top++;
//             arr[top] = data;
//            }
//         }
//         void pop(){
//             if(top == -1){
//                 cout<<"Underflow Condition You can not POP "<<endl;
//             }
//             else{
//                 top--;
//             }
//         }
//         void empty(){
//             if(top == -1){
//                 cout<<"Stack is Empty"<<endl;
//             }else{
//                 cout<<"Stack is Not Empty"<<endl;
//             }
//         }
//         int getsize(){
//             if(top == -1){
//                 cout<<"Stack is Empty ther is no more element"<<endl;
//             }
//             else{
//             return top+1;
//             }
//         }
//         void gettop(){
//            if(top==-1){
//             cout<<"Value dosn't Exist in Stack "<<endl;
//            }
//            else{
//             int data = arr[top];
//             cout<<data<<endl;
//            }
//         }

//         void print(){
//             for(int i = 0; i<getsize(); i++){
//                 cout<<arr[i]<<" | ";
//             }
//         }


// };
int solve(stack<int>s, int size){
    int pos;
    if(size&1 == 0){
        pos = size/2;
    }else{
        pos = (size/2)+1;
    }
    while (pos != 1){
        s.pop();
        int ans = solve(s,size-pos);
        
    }
}

int main(){ 
    stack<int>st;
    st.push(5);
    st.push(9);
    st.push(10);
    st.push(11);
    st.push(12);

    
    
    return 0;
}