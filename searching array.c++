#include<iostream>

using namespace std;

int searcharray(string food[],int size,string mynum);

int main(){
    string food[]={"Briyani","eggs","chicken","fish"};
    int index;
    int size=sizeof(food)/sizeof(food[0]);
    string myfood;

    cout<<"Enter the food you want to search :";
    getline(cin,myfood);

    index=searcharray(food,size,myfood);
    if(index!=-1){
        cout<<myfood<<" found at index "<<index;
    }
    else{
        cout<<food << " is not found!";
    }
}

int searcharray(string food[],int size,string myfood){
 for(int i =0;i<size;i++){
    if(food[i]==myfood){
        return i;
    }
    else{
        continue;
    }
 }
 return -1;
}