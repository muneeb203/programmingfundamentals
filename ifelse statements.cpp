#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"Enter a number: ";
cin>>num;
if (num<10){
cout<<"hello"<<endl;
cout<<"in if"<<endl;
cout<<"outside."<<endl;
}
else if ((num>=10) && (num>=50))
cout<<"num is 10"<<endl;

else 
cout<<"off";
return 0;
}
