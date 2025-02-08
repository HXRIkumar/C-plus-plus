#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    char unit;
     double temp;
   cout<<"*********Tempature Conversion**********"<<endl;
   cout<<"F-Fahrenheit\n";
   cout<<"C-celsius\n";
   cout<<"what you want to covert ?";
   cin>>unit;


   if(unit =='f'||unit=='F'){
    cout<<"Enter the temperature in celsius: ";
    cin>>temp;
    temp=(1.8*temp)+32.0;
    cout<<"Temperature is "<<temp<<"C\n";
   }
   else if(unit=='C'||unit=='c'){
    cout<<"Enter the temperature in fahrenheit:";
    cin>>temp;
    temp=(temp-32.0)/1.8;
    cout<<"Temperature is "<<temp<<"F\n";
   }
   else{
    cout<<"Enter only in C or F\n";
   }

    cout<<"***************************************";
    return 0;

}