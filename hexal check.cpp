#include<iostream>
using namespace std;
int main(){
   int n,rem_oct,octal=0,i=1;
    int m,rem_hex,hexa=0,j=1;
  cin>>n;
  
    while(n != 0)
    {
        rem_oct = n%8;
        n = n/8;
        octal = octal + (rem_oct*i);
        i = i*10;
    }
     cout<<"octal is : "<<octal<<endl;
     
      cin>>m;{
  
    while(m != 0)
    {
        rem_hex = m%16;
        m = m/16;
        hexa = hexa + (rem_hex*i);
        j = j*10;
    }
     cout<<"hexa is : "<<hexa<<endl;
      }
    
    return 0;
}
