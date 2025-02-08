#include<iostream>
#include<cmath>

using namespace std;
/*
calculate hypotenuse of right angled trinagle 
right angled triangle formula
c=root(a^2+b^2)
*/
int main(){
   double a,b,c;
   cout<<"Enter the values for an right angled triangle: ";
   cin>>a>>b;
   c=sqrt(pow(a,2)+pow(b,2));

   cout<<"Hypotenuse of right angled trinagle is "<<c<<endl;


    
    return 0;
    
}