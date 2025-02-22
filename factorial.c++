#include<iostream>

using namespace std;


int factorial(int num);

int main(){

    int num;

    cout<<"Enter the number :";
    cin>>num;

    cout<<factorial(num);
     

    return 0;
}/*
int factorial(int num){
   int sum=1;
    if(num==0||num==1){
        cout<<"Factorial of "<<num<<" is :"<<endl;
    }
    else{
        for(int i=1;i<=num;i++){
            sum=sum*i;
            
        }
       return sum;
    }
 return -1;

}*/
int factorial(int num){
  
    if(num>1){
        return num*factorial(num-1);
    }
    else{
        return 1;
    }

}  