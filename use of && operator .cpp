#include<iostream>
using namespace std;
int main()
{
int x;
cout<<"Enter the no=";
cin>>x;
switch ((x%5==0)&&(x%11==0))
{
case 1: cout<<"no is divisible by 5 and 11"<<endl;
break;


default:
cout<<"no is not divisible by 5 and 11"<<endl;
}

return 0;
}
