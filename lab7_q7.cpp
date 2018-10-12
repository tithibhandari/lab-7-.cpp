//A PROGRAMME TO FIND THE FACTORIAL OF ANY NUMBER

//DEFINE LIBRARY
#include<iostream>
using namespace std;

//TAIL & RECURSION

int fac (int n) {
   if (n>1){
     
       return (n*fac (n-1)); 
        } 
   else {
       return 1;
      }
    }
//THE MAIN FUNCTION
int main (){
  int n,result;
 cout <<"please enter the number" ;
 cin >> n;
  
//CALL THE FUNCTION
 fac (n);
 result=(n*fac(n-1));
cout << "the factorial of"  <<n<< "is"<<result<<endl;
return 0;
}
