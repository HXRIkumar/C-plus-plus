#include<iostream>

using namespace std;
//memory address =a location in memory where data is stored 
//a memory address can be accessed with &( address of operator)
int main(){
  
    string name="BRO";
    int age=45;
    bool staff=true;
    cout<<"memory of address name is "<<&name<<"\n";
    cout<<"memory of address age is "<<&age<<"\n";
    cout<<"memory of address staff is "<<&staff<<"\n";
    

    return 0;
}