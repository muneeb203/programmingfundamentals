//Muneeb ur Rehman Quresi
//DS-B
//22I-1965

#include<iostream>
using namespace std;
int main()


{
    char a,b,c,d,e,f;
    cout<<"Enter the password=";
    cin>>a>>b>>c>>d>>e>>f;
    
    if (((a>=65)&&(a<=90))||((b>=65)||(b<=90))||((c>=65)&&(c<=90))||((d>=65)&&(d<=90))||((e>=65)&&(e<=90))||((f>=65)&&(f<=90))){
    //cout<<"hi";
         if (((a>=97)&&(a<=122))||((b>=97)&&(b<=122))||((c>=97)&&(c<=122))||((d>=97)&&(d<=122))||((e>=97)&&(e<=122))||((f>=97)&&(f<=122))){
          //cout<<"hi1";
          
                if (((a>=48)&&(a<=56))||((b>=48)&&(b<=56))||((c>=48)&&(c<=56))||((d>=48)&&(d<=56))||((e>=48)&&(e<=56))||((f>=48)&&(f<=56))){
                    
                    cout<<"Correct password";}
                    else{
            cout<<"Wrong password";
            }
    
    }    else{
    cout<<"Wrong password";
    }
    }
    else{
    cout<<"Wrong password";
    }
    return 0;
}
    

