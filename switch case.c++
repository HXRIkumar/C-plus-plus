#include<iostream>

using namespace std;

int main(){
    char a;
    cout<<"When is APPA birthday ?"<<endl;
    cout<<"A)27th august"<<"\n"<<"B)23th august"<<"\n"<<"C)13th august"<<"\n"<<"D)15th august";
   cout<<endl;
    cout<<"Enter(A/B/C/D): "<<endl;
    cin>>a;

    switch(a){
        case 'A':
        cout<<"wrong";
        break;
        case 'B':
        cout<<"wrong";
        break;
        case 'C':
        cout<<"wrong";
        break;
        case 'D':
        cout<<"right";
        break;
        default:
        cout<<"invalid";
        break;
    }

    return 0;
}