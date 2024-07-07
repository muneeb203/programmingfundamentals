//Muneeb ur Rehman Quresi
//DS-B
//22I-1965


#include<iostream>
using namespace std;
int main()
{
    char y,Y,n,N,x,z,a,b,c;
    
    cout<<"Think of a quadrilateral from square, rectangle, kite, rhombus, trapezium and parallelogram and I will guess it."<<endl;
    cout<<"Lets start!!!!"<<endl;
    cout<<"NOTE: GIVE INPUT IN FORM OF Y OR N ONLY"<<endl;
    {
    cout<<"Q1. Are all sides equal? (Y or N)";
    cin>>x;
    if ((x=='y')||(x=='Y')){{
             cout<<"Are all angels equal?";
             cin>>z;}
             if ((z=='y')||(z=='Y'))
             cout<<"The figure is a square";
             else if ((z=='n')||(z=='N')){
             cout<<"Are only parallel angels equal?";
             cin>>a;}
             if ((a=='Y')||(a=='y')){
             cout<<"The figure is a Rhombus";}}
    else if ((x=='n')||(x=='N')){{
        cout<<"Are any two sides equal?";
        cin>>b;}
    	 if ((b=='Y')||(b=='y')){
        cout<<"Are any two angels equal?";
        cin>>a;}
        	if ((a=='y')||(a=='Y'))
        	cout<<"The figure is of a Kite";
        else if ((b=='n')||(b=='N')){
        cout<<"Are any four angels equal?";
        cin>>c;}
        	if ((c=='y')||(c=='Y'))
        	cout<<"The figure is of a rectangle";}
       
    //else if   
      
     //trapezium 1 pair of || sides and one un|| sides
     //||gram have opp sides || and opp sides and angles are concurrent 
     else 
     cout<<"Wrong input!!!";
    }      
      return 0;  
        

}




