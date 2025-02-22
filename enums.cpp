#include<iostream>

using namespace std;

enum days {monday,tuesday};


int main(){
     
days day=tuesday;
switch(day){
    case monday:
    cout<<"it is monday"<<endl;
    break;
    case tuesday:
    cout<<"it is tuesday"<<endl;
    break;
    default:
    cout<<"invalid day"<<endl;
}

    return 0;
}