#include<iostream>

using namespace std;

int main(){
   
   //logical operators
   /*
   &&- both the conditions should be true
   ||-either one of them has to  be true
   ! - reverses the logical state of its operand
   */

  double temperature;
  cout<<"Enter temperature: ";
  cin>>temperature;

  if(temperature>0 && temperature<25){
    cout<<"temperature is normal";
  }
  else if (temperature>50||temperature<60)
  {
    cout<<"medium temperature";

  }
  cout<<endl;
 int sunny=(temperature>30)?true:false;
  if(!sunny){
    cout<<"it is not sunny";

  }
  else{
    cout<<"it is sunny";
  }
    return 0;

}