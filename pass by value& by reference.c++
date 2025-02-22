#include<iostream>

using namespace std;

void swap(string &x,string &y);//pass by reference

int main(){
 string x="Yogesh";
 string y="sanjay";
 swap(x,y);
cout<<"X: "<<x<<endl;
cout<<"Y: "<<y<<endl;
    return 0;
}
void swap(string &x,string &y){
    string temp;
    temp=x;
    x=y;
    y=temp;
 
}