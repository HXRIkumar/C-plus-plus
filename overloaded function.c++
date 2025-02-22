#include<iostream>

using namespace std;

void car(){
    cout<<"A GOOD CAR"<<endl;
}
void car(string carname){
    cout<<carname<<" is a really good car"<<endl;
}
int main(){
    car();
    car("Audi");

    return 0;
}
