#include <iostream>
using namespace std;
void product(int lenght);
main(){
	cout<<"Enter the side length of the Rubik's Cube: ";
	int length;
	cin>> length;
	product (length);
}

	void product(int length)
{
	int stickers;
	cin>> stickers;
	stickers= length*length*6;
	cout<<"Number of stickers needed: " << stickers;
}