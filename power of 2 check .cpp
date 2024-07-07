//Muneeb ur Rehman Quresi
//DS-B
//22I-1965

#include<iostream>
using namespace std;
int main(){
int x;
cout<<"Enter the no=";
cin>>x;

if (((x)&(x-1))==0)
cout<<"The no is the power of 2"<<endl;
else 
cout<<"The no is not a power of 2"<<endl;


return 0;
}
