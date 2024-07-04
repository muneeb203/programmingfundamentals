#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    
    
    switch (x==y){
    case 1 : cout<<"both values are same";break;
    case 0 : {
        z=x;
        x=y;
        y=z;
        cout<<"swapped values are="<<endl;
        cout<<"x="<<x<<endl;
        cout<<"y="<<y;
    }
    }
    return 0;
}
