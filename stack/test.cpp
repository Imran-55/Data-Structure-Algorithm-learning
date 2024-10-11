#include<iostream>
using namespace std;

void change(int &i){
    if(i == 5 || i == 3){
        i = 69;
    }
}

int main(){

int n = 10;

for(int i = 0; i < n; i++){
    change(i);
    cout<<" "<< i <<" "<<endl;

}

    return 0;
}