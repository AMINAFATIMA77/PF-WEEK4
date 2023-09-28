#include <iostream>
using namespace std;
void sum(int n1, int n2);
void subtract(int n1, int n2);
void product (int n1, int n2);
void quotient (int n1, int n2); 
main(){
	cout<<"Enter 1st number: ";
	int n1;
	cin>> n1;
	cout<<"Enter 2nd number: ";
	int n2;
	cin>>n2;
	cout <<"Enter an operator (+, -, *, /): ";
	char op;
	cin>> op;
if(op == '+'){
	sum(n1,n2);
}
if(op == '-'){
	subtract(n1,n2);
}
if(op == '*'){
	product(n1,n2);
}
if(op == '/'){
	quotient(n1,n2);
}
}
void sum(int n1, int n2)
{
	cout<<"Addition: " << n1+n2;
}
void subtract(int n1, int n2)
{
	cout<<"Subtraction: "<< n1-n2;
}
void product (int n1, int n2)
{
	cout<<"Multiplication: "<< n1*n2;
}
void quotient (int n1, int n2)
{
	cout<<"Division: "<< n1/n2;
} 
	
	