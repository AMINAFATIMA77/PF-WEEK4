#include <iostream>
using namespace std;
void eligibility(int age);
main(){
cout<<"Enter your age: ";
int age;
cin>>age;
if(age >= 18)
{
cout <<"You are eligible to vote." ;
}



if(age < 18)
{
cout<<"You are not eligible to vote.";
}
}