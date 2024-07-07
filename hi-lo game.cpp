//Muneeb ur Rehman Quresi
//DS-B
//22I-1965

#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
int x,y;
srand(time(0));
x=rand()%100;

cout<<"Game of HI-LO"<<endl;
cout<<"Lets play!!"<<endl;
cout<<"Enter a no:";
cin>>y;


if (x==y)
	cout<<"Correct guess!!!";
	
else {
    if(y>x){
        cout<<"Your guess is too big";
    }
    else{
        cout<<"Your guess is too small";
    }
    cout<<"  Try again";
    cin>>y;
    if (x==y)
	cout<<"Correct guess!!!";
	
else {
    if(y>x){
        cout<<"Your guess is too big";
    }
    else{
        cout<<"Your guess is too small";
    }
    cout<<"  Try again";
    cin>>y;
    if (x==y)
	cout<<"Correct guess!!!";
	
else {
    if(y>x){
        cout<<"Your guess is too big";
    }
    else{
        cout<<"Your guess is too small";
    }
    cout<<"  Try again";
    cin>>y;
    if (x==y)
	cout<<"Correct guess!!!";
	
else {
    if(y>x){
        cout<<"Your guess is too big";
    }
    else{
        cout<<"Your guess is too small";
    }
    cout<<"  Try again";
    cin>>y;
    if (x==y)
	cout<<"Correct guess!!!";
	
else {
    if(y>x){
        cout<<"Your guess is too big";
    }
    else{
        cout<<"Your guess is too small"<<endl;
    }
    cout<<"You ran out of guesses"<<endl;
    cout<<"The correct no is="<<x;
    
}	
}	
}	
}	
}	




return 0;
}

