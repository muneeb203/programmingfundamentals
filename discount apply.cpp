#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Please enter your total purchase value:"<<endl;
    cin>>x;
    if (x>2000){
    cout<<"Discount is applicable"<<endl;
    y=x*0.1;
    cout<<"The total purchase value after discount is:";
    z=x-y;
    cout<<z;}
    else{
    cout<<"Discount is not applicable on amount less than 2000"<<endl;
    cout<<"The total purchase value after discount is:";
    cout<<x;}
    
    return 0;
}
