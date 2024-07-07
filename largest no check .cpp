//Muneeb ur Rehman Quresi
//DS-B
//22I-1965

#include<iostream>
using namespace std;
int main(){
int x,y,z;
cout<<"Enter first no=";
cin>>x;
cout<<"Enter second no=";
cin>>y;
cout<<"Enter third no=";
cin>>z;


((x>y)&&(x>z))?cout<<x:(((y>x)&&(y>z))?cout<<y:((z>y)&&(z>x))?cout<<z:cout<<"no same numbers");
cout<<" is largest no.";


return 0;
}
