#include <iostream>
using namespace std;
void determine(int n);
main(){
cout<<"Enter a number: ";
int n;
cin>>n;
if(n%2 == 0  )
{
cout <<"Number " << n << " is even" ;
}



if(n%2 > 0)
{
cout<<"Number " << n << " is odd";
}
}