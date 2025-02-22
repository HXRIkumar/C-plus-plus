#include<iostream>

using namespace std;
int gettotal(int arr[],int size);

int main(){
    int arr[]={12,32,54,67,78};
    int size=sizeof(arr)/sizeof(arr[0]);
    int total=gettotal(arr,size);
    cout<<"total of the array is :"<<total<<endl;
    return 0;
}

int gettotal(int arr[],int size){
    int sum=0;
    
   for(int i=0;i<size;i++){
     sum+=arr[i];
   }
    return sum;
}