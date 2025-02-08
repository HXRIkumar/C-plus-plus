#include<iostream>
#include<ctime>


using namespace std;

int main(){
    srand(time(0));

   int guess;
   int tries;
   int num=(rand()%100)+1;
  cout<<"******************Number Guessing Game******************\n";
   do{
    cout<<"Take a guess between 1 to 100\n";
    cin>>guess;
    tries++;
     if(guess<num){
            cout<<"too low\n";

     }
     
    else if(guess>num){
        cout<<"too high\n";

     }
     else{
        cout<<"Correct!! no of tries is:"<<tries<<endl;
     }
     

     if(tries>4){
        cout<<"You ran out of tries\n";
        break;
     }

   }while(guess!=num);
   cout<<"******************Game Over!******************";
    return 0;
}