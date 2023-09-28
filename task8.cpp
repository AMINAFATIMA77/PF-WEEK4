#include <iostream>
using namespace std;
void purchase (string day,float amount);
main(){
cout<<"Enter the day of purchase: ";
string day;
cin>>day;
cout<<"Enter the total purchase amount: "<<"$";
float amount;
cin>>amount;
float disamount;
disamount= (amount - (amount*0.1)) ; 


if(day == "Monday" )
{
cout <<"Payable Amount: " << "$"<< amount ;
}
if(day == "Tuesday" )
{
cout <<"Payable Amount: " << "$"<< amount ;
}
if(day == "Wednesday" )
{
cout <<"Payable Amount: " << "$"<< amount ;
}
if(day == "Thursday" )
{
cout <<"Payable Amount: " << "$"<< amount ;
}
if(day == "Friday" )
{
cout <<"Payable Amount: " << "$"<< amount ;
}
if(day == "Sunday")
{
cout<<"Payable Amount: " <<  "$"<< disamount ;
}
}