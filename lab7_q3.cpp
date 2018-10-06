//to print all the even numbers using recursion

//define library
#include<iostream>
using namespace std;

//TAIL & RECURSION
 int foo (int min, int max){
       if (min % 2==0)
          {
    cout << min ;     
           min = min+2;
// repeat by recursion 
      foo ( min , max );
          }
 else 
   {
    min ++;
     foo (min,max);
   }
  }
// main function or the driver function
 int main(){
  int min,max;
 cout <<"please enter the minimum number" ;
 cin >> min;
  cout << "please enter the maximum number ";
  cin >> max ;
  foo (min,max);
  cout << foo(min,max) << "all the natural numbers till" <<  endl;
  return 0;
}   





