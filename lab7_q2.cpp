//to print the sum of the natural numbers from 1 to n

//DEFINE THE LIBRARY

#include<iostream>
using namespace std;

//TAIL & RECURSION

int foo(int n){
     if ( n >1 ){
          return n+foo(n-1);
                }
  else 
    {
     return 1;
   foo(n);
    }
   }      
//the main or the driver function

int main (){
int  n ;
cout << "please enter a number n" ;
cin >> n;
 foo (n) ;
cout << foo (n)<< "the sum of the natural number until "<< n << endl  ;

return 0;

}   
