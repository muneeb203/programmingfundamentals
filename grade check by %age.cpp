#include<iostream>
using namespace std;
int main()
{
int x,y,z;
cout<<"Enter your obtained marks= "<<endl;
cin>>x;
cout<<"Enter total marks= ";
cin>>y;
z=(x*100)/y;
cout<<"percentage is= "<<z<<endl;

cout<<"Grade is="<<endl;

if ((x>=90)&&(x<=100))
cout<<"Grade A"<<endl;
else if ((x>=80)&&(x<90))
cout<<"Grade B"<<endl;
else if ((x>=70)&&(x<80))
cout<<"Grade C"<<endl;
else if ((x>=60)&&(x<70))
cout<<"Grade D"<<endl;
else if ((x>=40)&&(x<60))
cout<<"Grade E"<<endl;
else if (x<40)
cout<<"Grade F"<<endl;



return 0;
}
