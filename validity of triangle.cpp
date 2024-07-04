#include<iostream>
using namespace std;
int main()
{
    int x,y,z,s;
    cout<<"Enter first angle=";
    cin>>x;
    cout<<"Enter second angle=";
    cin>>y;
    cout<<"Enter third angle=";
    cin>>z;
    
    s=x+y+z;
    
    if (s==180)
    cout<<"The triangle is valid";
    else 
    cout<<"The triangle is not valid";
    return 0;
}
