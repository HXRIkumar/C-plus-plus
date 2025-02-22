#include<iostream>

using namespace std;

int main(){
    
    int *pointer=nullptr;
    int x=45;
    pointer=&x;
    if(pointer==nullptr){
        cout<<"address not assigned!!"<<endl;

    }
    else{
        cout<<"Address assigned!!"<<endl;
        cout<<"Address of x is :"<<pointer<<endl;
    }
    return 0;
}