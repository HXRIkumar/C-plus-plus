#include<iostream>
#include<ctime>

using namespace std;
 
char getuserchoice();
char getcomputerchoice();
void showchoice(char player);
void choosewinner(char player,char computer);

int main(){
    char player;
    char computer;

      player=getuserchoice();
      cout<<"Your choice ";
      showchoice(player);
      cout<<endl;
       computer=getcomputerchoice();
        showchoice(computer);
       choosewinner(player,computer);

    return 0;
}

char getuserchoice(){
    char player;
    
    cout<<"****************Rock-Paper-Scissor GAME !!****************"<<endl;
  do{
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"r-rock\n";
    cout<<"p-paper\n";
    cout<<"s-scissor\n";
    cout<<"------------------------------------------------------------\n";
     cin>>player;
  }while(player!='r'&&player!= 'p' &&player!='s');
    return player;

}
char getcomputerchoice(){
    
     srand(time(NULL));
     int choice=(rand()%3)+1;
     switch(choice){
        case 1:return 'r';
        case 2:return 'p';
        case 3:return 's';
        default:
        return 'r';
     }
    }

void showchoice(char player){
    switch(player){
        case'r':
        cout<<"rock"<<endl;
        break;
        case'p':
        cout<<"paper"<<endl;
        break;
        case's':
        cout<<"scissor"<<endl;
        break;
        
    }
    }
    
void choosewinner(char player,char computer){

switch(player){
case 'r': if(computer=='r'){
              cout<<"It's a tie.\n";              
              }
              else if(computer=='p'){
              cout<<"computer won!!\n";

              }
              else{
              cout<<"You won!!\n";
              }
              break;
case 'p': if(computer=='p'){
              cout<<"It's a tie.\n";              
              }
              else if(computer=='s'){
              cout<<"computer won!!\n";

              }
              else{
              cout<<"You won!!\n";
              }
              break;
case 's': if(computer=='s'){
              cout<<"It's a tie.\n";              
              }
              else if(computer=='p'){
              cout<<"you won!!\n";

              }
              else{
              cout<<"computer won!!\n";
              }
              break;
    
    
}
    }
    
    
