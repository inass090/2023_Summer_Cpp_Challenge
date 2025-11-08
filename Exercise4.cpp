//Title: Fibonacci Sequence
//Description: Write a program that prints the Fibonacci sequence up to a given number. 
//The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones. 
//The sequence starts with 0 and 1.

#include<iostream>
using namespace std;

int main(){
	
	
int first_numb=0;
int second_numb=1;
int next=0;
int users_numb;
cout<<"welcome to my Fibonacci series"<<endl<<"Enter a number and my wonderful program will add the numbers untel the number you entered" <<endl;
cin>>users_numb;

cout<<"Febonacci series for "<<users_numb<<" is "<<endl;

while(next<users_numb){
	
	next=first_numb+second_numb;
	cout<<" "<<next<<" ";
	first_numb=second_numb;
	second_numb=next;
} 

	
		
	
	return 0;
	
}
