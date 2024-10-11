// #include<iostream>
// #include<stack>
// using namespace std;

// void insertAtBottom(stack<int>&st,int &data){
//     // base case
//     if(st.empty()){
//         st.push(data);
//         return ;
//     }

//     int temp = st.top();
//     st.pop();
//     // recursive call
//     insertAtBottom(st,data);
//     // backtracking
//     st.push(temp);
// }

// void reverse(stack<int> &st){
//     if(st.empty()){
//         return ;
//     }

//     int temp = st.top();
//     st.pop();

//     reverse(st);

//     insertAtBottom(st,temp);
// }

// int main(){

// stack<int> st;

// st.push(40);
// st.push(50);
// st.push(60);
// st.push(70);
// st.push(80);
// st.push(90);
// st.push(440);

// reverse(st);
// while(!st.empty()){
//     cout<<st.top()<<" ";
//     st.pop();
// }


//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void solve(stack<int>st){

}

void InsertAtBottom(stack<int>&st,int data){
    if(st.empty()){
        st.push(data);
        return;
    }

    int temp = st.top();
    st.pop();
    InsertAtBottom(st,data);
    st.push(temp);

}
void print(stack<int>s){
   while(!s.empty()){
    cout<<s.top()<<" | ";
    s.pop();
   }
}
void reverse(stack<int>&s){
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        reverse(s);
        cout<<temp<<" ";
    }
}
int main(){ 
    stack<int>st;
    st.push(10);
    st.push(11);
    st.push(12);
    print(st);
    cout<<endl;
    cout<<"Top -> "<<st.top()<<endl;
    InsertAtBottom(st,9);
    cout<<endl<<endl;
    print(st);
    cout<<endl;
    cout<<"Top -> "<<st.top()<<endl;
    reverse(st);

    return 0;
}