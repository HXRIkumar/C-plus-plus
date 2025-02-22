#include<iostream>

using namespace std;
 void bubblesort(int array[],int size);
int main(){
    int array[]={10,1,4,8,9,7,3,2};
    
    int size=sizeof(array)/sizeof(array[0]);
    bubblesort(array,size);
    cout<<"sorted array is: ";
    for(int i=0;i<size;i++){
        cout<<" "<<array[i];
    }
   
    return 0;
}
void bubblesort(int array[],int size){
  int temp=0;

  /*nested loop is used here
    first loop size -1 = from 0 to 7 (as last element will be sorted)
    second loop i<size-i-1 because as we are sorting the last elements will be sorted 
    and then inside the loop we using swaping with conditions (if )
    and using a temp
     
  */
  for(int i=0;i<size-1;i++){
    for(int j=0;j<size-i-1;j++){

        if(array[j]>array[j+1]){
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }

    }
   
  }
}

