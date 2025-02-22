#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);
int main(){
    double balance=456;
    int choice=0;
    do{
    cout<<"********************BANK PROGRAM********************"<<endl;
    cout<<"Enter your choice: "<<endl;
    cout<<"1.SHOW BALANCE"<<endl;
    cout<<"2.DEPOSIT"<<endl;
    cout<<"3.withdraw"<<endl;
    cout<<"4.Exit"<<endl;
    cin>>choice;
    /*
     Here's a simple explanation for this block of code:

             cin.fail():
               Checks if the user entered invalid input (like letters instead of numbers).

            cin.clear():
                Fixes the error so the program can continue working.

            cin.ignore(1000, '\n'):
                Skips up to 1000 characters or until a newline (\n) is found. This removes the invalid input from the input buffer.

            cout message:
                Tells the user they entered something wrong and asks for a valid number.

            continue:
                Skips the rest of the loop and goes back to ask for input again.
    */
   
    if (cin.fail()) {  // If user enters invalid input like letters
        cin.clear();   // Clear the error flag
        cin.ignore(1000, '\n');  // Ignore invalid input
        cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
        continue;
    }

    switch(choice){
        case 1:
          showBalance(balance);
          break;
        case 2:
           balance=balance+deposit();
           showBalance(balance);
         
          break;
        case 3:
          balance=balance-withdraw(balance);
          showBalance(balance);

          break;
        case 4:
        cout<<"THANKS FOR VISITING !"<<endl;
          
          break;
        default:
        cout<<"INVALID choice"<<endl;
    }
}while(choice!=4);
 cout<<"*****************************************************"<<endl;
    return 0;
}
void showBalance(double balance){
 cout<<"Your balance is:"<<balance<<endl;
}
double deposit(){
    double money;
    cout<<"Enter the amount you want to deposit: "<<endl;
    cin>>money;
     if(money>0){
        return money; 
     }
    else{
        cout<<"Invalid amount!!"<<endl;
        return 0;
    }
}
double withdraw(double balance){
    double money;
    cout<<"Enter the amount you want to withdraw: "<<endl;
    cin>>money;
    if(money<=balance){
        return money;
    }
    else{
        cout<<"Invaild amount!!";
        return 0;
    }
    
}