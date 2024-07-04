//basic functionality of switch statement 
#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"Enter a number: ";
cin>>num;
switch(num){
	case 1:
	cout<<"in case 1"<<endl;
	break;
	case 2:
	cout<<"in case 2"<<endl;
	break;
	case 3:
	cout<<"in case 3"<<endl;
	break;


									
	default:
	cout<<"wrong input!"<<endl;}
return 0;
}
