#include <iostream>
using namespace std;
void divide(float inches);

main(){
	cout<< "Enter the measurement in inches: ";
	float inches;
	cin>> inches;
	
	
	
	divide(inches);
}
void divide(float inches)
{
	float feet;
	feet = inches/12;
	cout<<"Equivalent in feet: " <<feet;
}