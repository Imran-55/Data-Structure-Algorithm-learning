#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&st,int &pos, int&ans){
    if(pos == 1){
        ans = st.top();
        return ;
    }
    pos--;
    int temp = st.top();
    st.pop();
    solve(st,pos,ans);
    st.push(temp);
}

int getmiddle(stack<int>&st){
    int size = st.size()-1;
    int pos = 0;
    if(size & 1){
        pos = size/2 +1;
    }
    else{
        pos= size/2;
    }

   int ans = -1;
   solve(st,pos,ans);
   return ans;
}

int main(){

stack<int> st;
st.push(5);
st.push(10);
st.push(15);
st.push(20);

int ans = getmiddle(st);
cout<<"MIddle element is : "<<ans<<endl;

return 0;
}