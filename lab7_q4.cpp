//to print the revrese of any number  using recursioin

//DEFINE LIBRARY
#include <iostream>
using namespace std;

//tail & recursion
 int  reversed (int n ){
       //THE BASE CASE 
        if (n < 10 ){ 
                cout << n << endl;
              }
      else {
        cout << ( n % 10 ) ;
//repeatation
           reversed ( n/10 );    
           }
 }
int main (){
  int n;
cout << "please enter a number";
cin >> n;
reversed (n);

return 0;

} 

  



