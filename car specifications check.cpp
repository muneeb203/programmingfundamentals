//Muneeb ur Rehman Quresi
//DS-B
//22I-1965


#include<iostream>
using namespace std;
int main()
{
int x,y,z;
    cout<<"Total no of wheels=";
    cin>>x;
    cout<<"Total car bodies=";
    cin>>y;
    cout<<"Total figure of people=";
    cin>>z;
    
    x=x/4;
    z=z/2;
    if ((x<y)&&(x<z)){
    cout<<"Total no of cars=";
    cout<<x<<endl;
    }
    else if ((y<z)&&(y<x)){
    cout<<"Total no of cars=";
    cout<<y<<endl;
    }
    else {
    cout<<"total no of cars=";
    cout<<z<<endl;}
    return 0;
}
