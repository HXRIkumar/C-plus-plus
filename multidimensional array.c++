#include<iostream>

using namespace std;

int main(){
    
    string friends[3][4]={{"sanjay ","naren ","selva bhai ","pavan "},
                          {"suriya ","yogesh ","jeeva bhai ","sudharsan "},
                        {"nithin ","moni ","   yogiraj ","   gopi "}};
    int rows=sizeof(friends)/sizeof(friends[0]);
    int columns=sizeof(friends[0])/sizeof(friends[0][0]);

    for(int i =0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<friends[i][j];
        }
        cout<<endl;
    }
    return 0;
}