#include<iostream>
//#include<string>
using namespace std;
int main()
{
    int x1,x2,x3,y1,y2,y3;
    float m1,m2;
    cout<<"x1=";
    cin>>x1;
    cout<<"y1=";
    cin>>y1;
    cout<<"x2=";
    cin>>x2;
    cout<<"y2=";
    cin>>y2;
    cout<<"x3=";
    cin>>x3;
    cout<<"y3=";
    cin>>y3;
    m1=(y2-y1)/(x2-x1);
    cout<<"slope m1 is ";
    cout<<m1<<endl;
    m2=(y3-y2)/(x3-x2);
    cout<<"slope m2 is ";
    cout<<m2<<endl;
    
    
    (m1==m2)?cout<<"on same line":cout<<"not on same line";
    
    
    
    return 0;
}
