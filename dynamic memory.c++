#include<iostream>

using namespace std;

int main(){

   int *pnum=nullptr;
   pnum=new int;
   *pnum=10;

   cout<<pnum<<endl;
   cout<<*pnum<<endl;

    /*int size;
    char *pGrades =nullptr;
    cout<<"Enter the no of grades you want to enter:";
    cin>>size;
    pGrades=new char[size];

    for(int i=0;i<size;i++){
        cout<<"Enter grade "<<i+1<<" :";
        cin>>pGrades[i];
    }
    for(int i =0;i<size;i++){
        cout<<pGrades[i]<<endl;
    }*/






       char *gradesp=nullptr;

       int size;

       cout<<"enter the size you want:";
       cin>>size;

       gradesp=new char[size];

       for(int i=0;i<size;i++){
        cout<<"Enter the "<<i<<" grade:";
        cin>>gradesp[i];

       }
       for(int i=0;i<size;i++){
       cout<<gradesp[i]<<endl;
       }












    return 0;
}