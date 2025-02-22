#include<iostream>
#include<ctime>

using namespace std;


void drawBoard(char *spaces);
void playerMove(char *spaces,char player);
void computerMove(char *spaces,char computer);
bool checkWinner(char *spaces,char player);
bool checkDraw(char *spaces);
int main(){
  
    char spaces[9]={' ',' ',' ', ' ',' ',' ',' ',' ',' '};
    char player='x';
    char computer='o';
    bool running=true;

    
    drawBoard(spaces);
    while(running){  
      playerMove(spaces,player);
      drawBoard(spaces);
      if(checkWinner(spaces,player)){
        running=false;
        break;
      }
      else if(checkDraw(spaces)){
        running=false;
        break;
      }

      computerMove(spaces,computer);
      drawBoard(spaces);
    }
    return 0;
}



void drawBoard(char *spaces){
    cout<<endl;
cout<<"     |     |     "<<endl;
cout<<"  "<<spaces[0]<<"  |"<<"  "<<spaces[1]<<"  |"<<"  "<<spaces[2]<<"  "<<endl;
cout<<"_____|_____|_____"<<endl;
cout<<"     |     |     "<<endl;
cout<<"  "<<spaces[3]<<"  |"<<"  "<<spaces[4]<<"  |"<<"  "<<spaces[5]<<"  "<<endl;
cout<<"_____|_____|_____"<<endl;
cout<<"     |     |     "<<endl;
cout<<"  "<<spaces[6]<<"  |"<<"  "<<spaces[7]<<"  |"<<"  "<<spaces[8]<<"  "<<endl;
cout<<"     |     |     "<<endl;
cout<<endl;
}
void playerMove(char *spaces,char player){
  int number;
  do{
    cout<<"Player "<<player<<" can select a spot between(1-9):";
    cin>>number;
    number--;
    if(number>=0&&number<9&&spaces[number]==' '){
        spaces[number]=player;
        break;
    }
  }while(true);    

}
void computerMove(char *spaces,char computer){
 int number;
    srand(time(0));
 
   while(true){
    number=rand()%9;
    if(spaces[number]==' '){
        spaces[number]=computer;
    break;
    }
   }
   
}
    

bool checkWinner(char *spaces,char player){


   if((spaces[0]!=' ')&&(spaces[0]==spaces[1])&&(spaces[1]==spaces[2])){
    spaces[0]==player?cout<<"You won\n":cout<<"You lose\n";
   }
   
   else if((spaces[3]!=' ')&&(spaces[3]==spaces[4])&&(spaces[4]==spaces[5])){
    spaces[3]==player?cout<<"You won\n":cout<<"You lose\n";
   }
   else if((spaces[6]!=' ')&&(spaces[6]==spaces[7])&&(spaces[7]==spaces[8])){
    spaces[4]==player?cout<<"You won\n":cout<<"You lose\n";
   }
   else if((spaces[0]!=' ')&&(spaces[0]==spaces[3])&&(spaces[3]==spaces[6])){
    spaces[0]==player?cout<<"You won\n":cout<<"You lose\n";
   }
   else if((spaces[1]!=' ')&&(spaces[1]==spaces[4])&&(spaces[4]==spaces[7])){
    spaces[1]==player?cout<<"You won\n":cout<<"You lose\n";
   }
   else if((spaces[2]!=' ')&&(spaces[2]==spaces[5])&&(spaces[5]==spaces[8])){
    spaces[2]==player?cout<<"You won\n":cout<<"You lose\n";
   }
   else if((spaces[0]!=' ')&&(spaces[0]==spaces[4])&&(spaces[4]==spaces[8])){
    spaces[0]==player?cout<<"You won\n":cout<<"You lose\n";
   }
   else if((spaces[2]!=' ')&&(spaces[2]==spaces[4])&&(spaces[4]==spaces[6])){
    spaces[2]==player?cout<<"You won\n":cout<<"You lose\n";
   }
   else{
    return false;
   }
   return true;
   
   
}
bool checkDraw(char *spaces){
   
    for(int i=0;i<9;i++){
        if(spaces[i]==' '){
            return false;
        }}
       cout<<"It's a tie!";
       return true;
    
}