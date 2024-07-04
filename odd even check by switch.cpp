#include<iostream>
using namespace std;
int main()

{
    int x;
    cout<<"Enter the no:";
    cin>>x;
    
    x=x%2;
    switch (x){
    case 0 : cout<<"The no is even.";break;
    case 1 : cout<<"The no is odd";break;
    

    default :
    cout<<"error!!!!";break;
    }    
    
    return 0;
    }
