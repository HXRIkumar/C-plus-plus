#include<iostream>
using namespace std;

void Printnum();
int printnum=3;
int main(){
    int printnum=1;
    //local declartion
    cout<<"LOCAL"<<endl;
    cout<<"NUMBER IS:"<<printnum<<endl;
    //global delcaration 
    //used scope operator
    cout<<"GLOBAL USED SCOPE"<<endl;
    cout<<"NUMBER IS:"<<::printnum<<endl;
    Printnum();
    return 0;
}
void Printnum(){
    int printnum=5;
    //local declaration
    cout<<"LOCAL"<<endl;
    cout<<"NUMBER IS:"<<printnum<<endl;
    //global declaration
    //scope is used
    cout<<"GLOBAL USED SCOPE"<<endl;
    cout<<"NUMBER IS:"<<::printnum<<endl;
}