#include<iostream>
#include<string>

using namespace std;

int main(){
  
    string friends[]={"sanjay","naren","suriya","pavan","yogesh","selva","jeeva","nithin"};
    /*int size=sizeof(friends)/sizeof(friends[0]);
    for(int i =0;i<size;i++){
        cout<<friends[i]<<endl;
    }
        */
       //for each loop 
       for(string friend_name : friends){
       cout<<friend_name<<'\n';
       }
    return 0;
}