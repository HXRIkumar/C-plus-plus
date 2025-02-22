#include<iostream>
using namespace std;


int main(){

  /* string freechoco[]={"choco 1","choco 2","choco 3","choco 4"};

   string *pfreechoco=freechoco;

   cout<<*pfreechoco<<endl;*/

   string name="Sumathi G S";

   string *pname=&name;

   cout<<*pname<<endl;

    return 0;
}