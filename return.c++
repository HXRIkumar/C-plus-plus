#include<iostream>

using namespace std;
double square(double length);
int main(){
   double length = 5.0;
   double area = square(length);
 cout<<"AREA :"<<area<<"cm^2"<<endl;
    return 0;
}
double square(double length){
    return length*length;
}