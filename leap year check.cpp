//Muneeb ur Rehman Quresi
//DS-B
//22I-1965

#include <iostream>
using namespace std;

int main() {
    int x;
    cout<<"Enter the year=";
    cin>>x;
    if ((x%4==0)&&(x%100!=0)||(x%400==0))
       cout<<"Year is a leap year";
        
    
    else 
    cout<<"Year is not a leap year."<<endl;

    return 0;
}
