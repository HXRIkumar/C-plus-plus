#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    if(age>18){
        cout<<"You are elligible to  vote";

    }
  
     else if(age==18){
        cout<<"You are elligible to vote";

    }
    else{
        cout<<"You ar enot elligible to vote as yur age is below 18!";
    }
    
    return 0;
}