#include<iostream>
#include<vector>


using namespace std;

//typedef - fro giving a user defined short name for a datatype
//using variable=datatype; is  more 
//commonly used nowadays

//typedef vector<pair<string,int>> text_t;
//typedef string text_t;
//typedef int num_t;
using text_t=string;
using num_t=int;
int main(){
    text_t firstname ="Hari";
    num_t age=19;

    cout<<firstname<<endl;
    cout<<age<<endl;
    return 0;
}