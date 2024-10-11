#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st,int &data){
    // base case
    if(st.empty()){
        st.push(data);
        return ;
    }

    int temp = st.top();
    st.pop();
    // recursive call
    insertAtBottom(st,data);
    // backtracking
    st.push(temp);
}

    

// int getmiddle(stack<int>&st){
//     int size = st.size()-1;
//     int pos = 0;
//     if(size & 1){
//         pos = size/2 +1;
//     }
//     else{
//         pos= size/2;
//     }

//    int ans = -1;
//    solve(st,pos,ans);
//    return ans;
// }

int main(){

stack<int> st;
st.push(5);
st.push(10);
st.push(15);
st.push(20);

int data = 200;
insertAtBottom(st,data);

while(!st.empty()){
    cout<<st.top()<<"  ";
    st.pop();
}

return 0;
}