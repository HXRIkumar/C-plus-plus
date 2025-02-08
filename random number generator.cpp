#include<iostream>

using namespace std;

int main(){
    srand(time(NULL));

    //int num=(rand()%6)+1;
    //above one is for dice 1 to 6 
    //below one is random numbers between 1 to 100
    int num=(rand()%100)+1;
    cout<<num;


    return 0;
}