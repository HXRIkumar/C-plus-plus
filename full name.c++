#include<iostream>

using namespace std;

string concatstring(string first,string last);

int main(){
     string last;
     string first;
     cout<<"Enter your first name:";
     getline(cin,first);
     cout<<"Enter your last name:";
     getline(cin,last);
    string fullname= concatstring(first,last);
    cout<<"Your full name is: "<<fullname<<endl;
    return 0;
}
string concatstring(string first,string last){
    string full;
    full=first+" "+last;
    return full;
}