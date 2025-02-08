#include<iostream>
using namespace std;
/*

This namespace usedv when you want to give different 
values to the same variable 
or 
to avoid name conflicts 

*/

namespace first{
  int  x=1;
}
namespace second{
    int x=2;
}

int main(){
   int x=0;
   cout<<x<<endl;
   cout<<first::x<<endl;
   cout<<second::x<<endl;
    return 0;
}