#include<iostream>

using namespace std;

class students{
  public:
    string name;
  int age;
  double gpa;
 students(){}
  students(string name,int age,double gpa ){
      this->name=name;
      this->age=age;
      this->gpa=gpa;


  }


};
 class marks:public students{
  public:

  int subject_marks;

  marks(string name,int age,double gpa,int subject_marks)
    :students(name,age,gpa){
      this->subject_marks=subject_marks;
    }
  

 };



int main(){
 marks mark1("rahul",19,9.99,97);
 students student1("hari",19,9.49);
 cout<<mark1.name<<endl;
 cout<<student1.age<<endl;
 cout<<student1.gpa<<endl;
    return 0;
}