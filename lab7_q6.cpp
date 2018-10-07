//to find the sum of the digits of a given number

//define the library

#include<iostream>
using namespace std;

int sum (int n) {
 
//THE BASE CASE	
   if (n < 10){
         cout << n <<endl;
          }
 else {
//REPEATATION
   return  sum ((n/10)+(n % 10));
      } 
    }  
int main (){
  int n;
 cout <<"please enter a number" ;
  cin >> n;
//CALLING THE FUNCTION
 sum (n);

return 0;
} 
