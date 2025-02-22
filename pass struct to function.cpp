#include<iostream>

using namespace std;

void print(car &cars);
void changecolor(car & car,string color);
struct car{
    int year;
    string model;
    string color;
};

int main(){

   car car1;
   car1.color="Red";
   car1.model="Honda";
   car1.year=2016;

   car car2;
 
   car2.color="Red";
   car2.model="BMW";
   car2.year=2016;

   changecolor(car1,"blue");
   changecolor(car2,"white");

   print(car1);
   print(car2);
    return 0;
}
void print(car &cars){
 cout<<cars.model<<endl;
 cout<<cars.year<<endl;
 cout<<cars.color<<endl;


}

void changecolor(car & car,string color){
    car.color=color; 
}