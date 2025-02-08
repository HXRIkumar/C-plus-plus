#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
    int num=10;

    /*
    increment operator is used ++
    decrement operator is used --

    */
    num++;
    cout<<num<<endl;
    num--;
    cout<<num<<endl;

//num is added with num using short hand way
    num+=10;
    cout<<num<<endl;

    //here precedence is used for calculation
    /*
    paraenthesis
    multiplication,division (left to right)
    addition,subtraction (left to right)
    */

    double n=34+1*45+(23-67)*31/2;
  cout<<n<<endl;
    return 0;
}