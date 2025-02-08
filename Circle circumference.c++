#include<iostream>

using namespace std;

int main(){
    double n;
    cout<<"Enter the radius:";
    cin>>n;
  const  double PI=3.14;
  double radius =n;
  double circumference=PI*2*radius;

  cout<<"The circumference of the circle is "<<circumference<<endl;
  return 0;
}