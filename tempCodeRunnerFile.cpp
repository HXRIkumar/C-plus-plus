#include<iostream>

using namespace std;


struct yogesh{
 string name;
 string gender;
 int age;
};

int main(){
yogesh yogs={"Yogesh","male",20};

    return 0;

}

void print(yogesh &yogs){
    cout<<yogs.name<<endl;
    cout<<yogs.gender<<endl;
    cout<<yogs.age<<endl;
}