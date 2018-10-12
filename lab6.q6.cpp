//including libabry
#include<iostream>
using namespace std;
//Askuser two numbers
void func1(int &num1,int &num2){
	cout<<"Let the two numbers be ";
	cin>>num1;
	cin>>num2;
}
//funcion to show the outputs the sum of all even numbers between firstNumber and secondNumber.
int sumEvenNumbers(int num1,int num2,int sum){
	int i;
	/*if(num1%2==0){*/
		for (i=num1;i<num2;){
			i=+2;
			sum=+i;}
		cout<<"the sum of even numbers between "<<num1<<" and "<<num2<<" is " <<sum<<endl;}
	/*else {
			num1=num1+1;
			for (i=num1;i<num2;i=+1){
			sum+=i;}
		cout<<"the sum of even numbers between "<<num1<<" and "<<num2<<" is" <<sum<<endl;}	
}*///main function
int main(){
	int num1,num2,sum;
//ASK USER
	func1(num1,num2);
//PROVIDING THE SUM OF EVEN NUMBERS
	sumEvenNumbers(num1,num2,sum);
	return 0;
}	
