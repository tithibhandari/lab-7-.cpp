//  FIND THE HCF OF TWO NUMBERS

//DEFINE THE LIBRARY

#include<iostream>
using namespace std;

//TAIL & RECURSION

int  hcf ( int m , int n ) {
//THE TWO NUMBERS 
    
   if ( n/m == 1 ){
        return n;
        }
   else  {
      return hcf (m,n % m);
         }  
    }
 int main (){
   int n,m;
   cout << "please enter the first number m";
   cin >> m;
   cout << "please enter the second number n";
   cin >> n;
 hcf (m, n % m );
cout << "result" << hcf  (m,n % m);
 return 0;
}       
  




