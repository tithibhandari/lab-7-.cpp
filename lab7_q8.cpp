//TO FIND THE POWER OF ANY GIVEN NUMBER  

//DEFINE LIBRARY
#include <iostream>
using namespace std;
 
// TAIL & REPEAT
int power(int x,int i,int pow,int n){
if (i==n)
  {
   return pow;
  }
 else {
     pow=pow*x;
    i++;
//to print the power
 return power(x,i,pow,n);
    }
//driver function
int main (){
  int x,n,ans;
 cout << "enter the number & its power";
 int i=0;
 int pow=1;
power(x,i,pow,n);
cout <<"required value of x^n is =" <,power(x,i,pow,n);
return 0;
} 
 

        
