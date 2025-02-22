#include<iostream>

using namespace std;

int main(){

  //fill()= fills a range of elments with a specified values
  //fill(begin,end,value);
   const int size=100;
  string classschool[size];
  //size is 100 so in first fill() i have given
  //from 1 to 50 and in the second i have given 
  //from 51 to 100 
  fill(classschool,classschool+(size/2),"friends");
  fill(classschool+(size/2),classschool+size,"many people");
   
  
  for(string classschool:classschool){
    cout<<classschool<<endl;
  }
    return 0;
}
