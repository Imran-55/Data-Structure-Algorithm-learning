#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void InsertSortedStack(stack<int>&t,int element){
 if(t.empty() || element>t.top()){
    t.push(element);
    return;
 }
 int temp = t.top();
 t.pop();
 InsertSortedStack(t,element);
 t.push(temp);
}

void print(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" | ";
        s.pop();
    }
}
void sortStack(stack<int>&s){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    sortStack(s);
    InsertSortedStack(s,temp);

    
}
int main(){ 
    stack<int>s;
    s.push(10);
    s.push(9);
    s.push(30);
    s.push(5);
    cout<<endl;
    // print(s);
    // InsertSortedStack(s,15);
    // cout<<endl;
    // print(s);
    sortStack(s);
    print(s);

    return 0;
}