#include <iostream>
using namespace std;
int main() {
   int x;
   cout<<"Days after book is returned=";
   cin>>x;
   
   if ((x>=0)&&(x<=7))
   {
       cout<<"you are fined!!"<<endl;
       cout<<"your fine is Rs 10"<<endl;
   }
   else if ((x>=8)&&(x<=14))
   {
       cout<<"you are fined!!"<<endl;
       cout<<"your fine is Rs 20"<<endl;
   }
   else if ((x>14)&&(x<=30))
   {
       cout<<"you are fined!!"<<endl;
       cout<<"your fine is Rs 50"<<endl;
   }
   else{ 
   cout<<"you got late!!!"<<endl;
   cout<<"your membership is canceled!!!"<<endl;
   }
 return 0;  
}
