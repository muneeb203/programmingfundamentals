#include<iostream>
using namespace std;
int main()

{
int a,b,c;
cout<<"Enter first value= ";
cin>>a;
cout<<"Enter second value= ";
cin>>b;
cout<<"Enter third value= ";
cin>>c;


cout<<"Result= "<<(a*a)+(b*b)+(c*c)+2*(a*b+b*c+c*a)<<endl;
return 0;
}
