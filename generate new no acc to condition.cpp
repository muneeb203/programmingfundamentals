#include<iostream>
using namespace std;
int main()
{
int x;
cout<<"Enter the no= "<<endl;
cin>>x;

if (x%5==0){
x=(3*x)+1;
cout<<"New no= "<<x<<endl;
}
else{ 
x=x/2;
cout<<"New No= "<<x<<endl;
}

return 0;
}
