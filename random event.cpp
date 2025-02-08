#include<iostream>
#include<ctime>//used if random number is generated with live time

using namespace std;

int main(){
    
    srand(time(0));

    int randnum=(rand()%6)+1;
    switch(randnum){
        case 1:
        cout<<"You will go to goa!";
        break;
        case 2:
        cout<<"You will go to bangalore!";
        break;
        case 3:
        cout<<"You will go to singapore!";
        break;
        case 4:
        cout<<"You will go to dubai!";
        break;
        case 5:
        cout<<"You will go to switzerland!";
        break;
        
        case 6:
        cout<<"You will go to home!";
        break;
        default:
        cout<<"Invalid choice!";
        
    }
    


    return 0;
}