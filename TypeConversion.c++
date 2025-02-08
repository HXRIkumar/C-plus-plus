#include<iostream>
using namespace std;
int main(){

  //type conversion =conversion of value from one data
  //type to another data type
  //implicit=automatic
  //explicit=continues with new data type given

/*
  //implicit
  int x=3.141332;
  cout<<x<<endl;
  //explicit
  double y=(int)3.141332;
  cout<<y<<endl;
*/

int correct =8;
int totalQuestion=10;
double score1=correct/totalQuestion*100;
cout<<score1<<"%"<<endl;
double score2=(double)correct/(double)totalQuestion*100;
cout<<score2<<"%"<<endl;
    return 0;
}