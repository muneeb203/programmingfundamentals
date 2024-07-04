#include<iostream>
using namespace std;
int main()
{
int x,y;
cout<<"x= ";
cin>>x;
cout<<"y= ";
cin>>y;

cout<<"and operation= "<<(x&y)<<endl;
cout<<"or operation= "<<(x|y)<<endl;
cout<<"xor operation= "<<(x^y)<<endl;
cout<<"compliment x= "<<(~x)<<endl;
cout<<"compliment y= "<<(~y)<<endl;
cout<<"left shift= "<<(x<<y)<<endl;
cout<<"right sift= "<<(x>>y)<<endl;




return 0;
}
