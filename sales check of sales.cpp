#include<iostream>
using namespace std;
int main()


{
int a,b,c,d,e;
cout<<"Unit Price of chocolates= ";
cin>>a;
cout<<"Quantity of chocolates sold per day= ";
cin>>b;
c=a*b;
cout<<"Total sales"<<c<<endl;
d=c*0.10;
cout<<"Tax deduction= "<<(d)<<endl;
e=c-d;
cout<<"Sales after tex deduction= "<<e<<endl;


return 0;
}
