#include<iostream>

using namespace std;

int main(){
 
    string foods[5];
    int size=sizeof(foods)/sizeof(foods[0]);
    string temp;
    cout<<"Enter the foods you like!!\n";
     for(int i =0;i<size;i++){
        cout<<"Enter the food "<<i+1<<" : (or quit -q )";
        getline(cin,temp);
        if(temp=="q"|| temp=="Q"){
            break;
        }
        else{
           foods[i]=temp;
        }

     }
     for(int i=0;!foods[i].empty();i++){
        cout<<foods[i]<<endl;
     }

    return 0;
}