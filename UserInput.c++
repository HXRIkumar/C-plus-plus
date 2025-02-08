
#include<iostream>
#include<string>


using namespace std;

//user input 
/*
cout-printing an output
cin-getting an input from user

To get entire line of input getline(cin,variable_name) is used
*/

int main(){
int age;
string name;
cout<<"How old are you? ";
cin>>age;
cout<<"What is your full name? ";
//if we have cin followed but getline 
//gteline accepts the character still inside the buffer
//so prevent it use gteline(cin>>ws,data_variable)
//here ws is white Space
getline(cin>>ws,name);


cout<<"Your full name is "<<name<<"."<<endl;
cout<<"Your age is "<<age<<" years old."<<endl;


    return 0;
}