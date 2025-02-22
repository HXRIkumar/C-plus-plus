#include<iostream>

using namespace std;

struct student{
   string name;
   int age;
   bool verified;
}student1,student2;

int main(){
 
     student1.name="Hari ";
     student1.age=19;
     student1.verified=true;

     student2.name="Sanjay";
     student2.age=20;
     student2.verified=true;

     cout<<student1.name<<endl;
     cout<<student2.name<<endl;


    return 0;
}