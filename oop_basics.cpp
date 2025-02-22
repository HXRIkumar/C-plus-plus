
#include<iostream>

using namespace std;

class car{
  public:
    int year;
  string colour;
  string model;
  string name;
  
  void speed(){
    cout<<"car is getting faster and faster"<<endl;

  }
  void stop(){

    cout<<"car is going to stop "<<endl;
  }


};


int main(){
    car car1;
    car1.year=2020;
    car1.colour="red";
    car1.model="BMW";
    car1.name="BMW M5";
    car1.speed();
    car1.stop();
    cout<<car1.name<<endl;
    cout<<car1.year<<endl;
    cout<<car1.model<<endl;
    cout<<car1.colour<<endl;
    
    return 0;
}