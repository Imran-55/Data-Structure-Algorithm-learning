#include<iostream>
using namespace std;

class stack{
    public:
    int *arr ;
    int size;
    int top1;
    int top2;

    stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data){
        if(top2-top1 == 1){
            cout<<" OVERFLOW "<<endl;
        }
        else {
            top1++;
            arr[top1] = data;
        }

    }

    void push2(int data){
        if(top2-top1 == 1){
            cout<<" OVERFLOW "<<endl;
        }
        else {
            top2--;
            arr[top2] = data;
        }

    }

    void pop1(){
        if(top1 == -1){
            cout<<" UNDERFLOW "<<endl;
        }
        else{
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2(){
        if(top2 == size){
            cout<< " UNDERFLOW "<<endl;
        }
        else{
            arr[top2] = 0;
            top2++;
        }
    }

    void print(){

        cout<<endl<<endl<<endl;
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl<<endl;
    }

};
int main(){
    stack st(10);
    st.push1(1);
    st.push1(2);
    st.push1(3);
    st.push1(4);
    st.push1(5);
    // st.print();

    st.push2(10);
    st.push2(20);
    st.push2(30);
    st.push2(40);
    st.push2(50);

    st.print();

    st.pop1();
    st.pop2();
    st.pop2();
    st.pop2();
    st.pop2();
    st.pop2();
    st.pop2();

    st.print();

    st.pop1();
    st.pop1();
    st.pop1();
    st.pop1();
    st.pop1();
    st.pop1();
    st.print();



    return 0;
}