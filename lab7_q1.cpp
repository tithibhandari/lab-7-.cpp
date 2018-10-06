//to print all the natural numbers from 1 to n using recursion

//DEFINE THE LIBRARY
#include<iostream>
using namespace std;
//TAIL & RECURSION

int foo(int i,int n ){
     
     if (i==n){ 
          return 0 ; }
  else 
      { cout << i<< endl; 
         i++;
         foo(i,n ); }
      
    }
int main()
  { int n;
   cout << "pleane enter the upper range n";
    cin >> n;
     foo(1,n);
return 0;
  }     
        
