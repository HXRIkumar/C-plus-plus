#include<iostream>

using namespace std;


int getdigit(const int number);
int SumEvenDigits(const string cardnumber);
int SumOddDigits(const string cardnumber);

int main(){
 
    string cardnumber;

    int result=0;

    cout<<"Enter your credit card number:";
    cin>>cardnumber;

    result=SumEvenDigits(cardnumber)+SumOddDigits(cardnumber);

      if(result%10==0){
        cout<<cardnumber<<" is valid !";
      }
      else{
        cout<<cardnumber<<" is not valid!";
      }
    return 0;
}
int getdigit(const int number){
    int split=(number%10)+(number/10%10);
    return split;
}
int SumEvenDigits(const string cardnumber){
   int sum=0;
   for(int i=cardnumber.size()-2;i>=0;i-=2){
    //cardnumber[i]-'0' where '0' is the char equivalent of decimal no 48
    //so if you want a value of char you need to -'0'
    sum+=getdigit((cardnumber[i]-'0')*2);
   }
   return sum;
}
int SumOddDigits(const string cardnumber){
    int sum=0;
    for(int i=cardnumber.size()-1;i>=0;i-=2){
     sum+=cardnumber[i]-'0';
    }
   
    return sum;
}