#include<iostream>

using namespace std;
int print(int steps);
int main(){
    print(8);
    return 0;
}
int print(int steps){
    if (steps <= 0) { // Base condition to stop recursion
        return 0;
    }
    string result="HI HARI !! You can do it!!";
    cout<<result<<endl;
    return print(steps-1);
}