	#include <iostream>
using namespace std;

int main() {
    for(int i=0;i<=39;i++){
        if((i>0)&&(i!=2)&&(i<19)){
            cout<<"    ";
            for(int j=0;j<9;j++){
            cout<<"*";
            }}
        //cout<<endl;
        
     
          if((i>=19)&&(i<=31)){
              cout<<"   ";
            cout<<"**|*****|**";}
            
            if(i==2){
                cout<<" "<<"___"<<"*********"<<"___";
            }
        
          if((i>=37)&&(i<=39)){
              cout<<"   ";
        cout<<"^^^^^^^^^^^";
        
        }
        if((i>31)&&(i<=35)){
        cout<<"||**|*****|**||";}
        
          if((i>=36)&&(i<=36)){
              cout<<"_______________";
        }
        
        cout<<endl;
    

        
    }

    return 0;
}
