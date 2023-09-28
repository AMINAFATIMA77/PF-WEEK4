#include <iostream>
using namespace std;

void product();

main()
{
	product();
}
void product()
{
	float distance , product;
	cout <<"Enter the distance: ";
	cin >> distance;
	product= distance*10;
	cout <<"Fuel needed: " << product ;
}