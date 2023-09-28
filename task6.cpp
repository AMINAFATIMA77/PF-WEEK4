#include <iostream>
using namespace std;
void criteria(int score);
main(){
cout<<"Enter your score: ";
float score;
cin>>score;
if(score > 50)
{
cout <<"Pass" ;
}



if(score <= 50)
{
cout<<"Fail";
}
}