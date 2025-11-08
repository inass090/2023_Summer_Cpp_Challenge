//Title: Factorial
//Description: Write a program that calculates the factorial of a given number.
//The factorial of a non-negative integer n is the product of all positive integers less than or equal to n.	
#include <iostream>
using namespace std;


int factorial(int users_numb){
	
	if (users_numb==1) {
		return 1;
	}
 else {
 	 return users_numb* factorial(users_numb-1);
 }
 
}




int main (){
	
	int users_numb;
	cout<<" Enter a number to find its factorial"<<endl;
	cin>>users_numb;
	
	if (users_numb<0){
		cout<<"can't find the factorial of a negative number"<<endl;
		
	}
	else{
		
	int	factorial_function =factorial(users_numb);
	cout<<"the factorial number of "<<users_numb<<" is "<<factorial_function;	
		
	}
	
	
	
	
	
	
	
	return 0;
}
