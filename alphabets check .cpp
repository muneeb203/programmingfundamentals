#include<iostream>
using  namespace std;
int main()
{
    char x;
    cout<<"x=";
    cin>>x;
    
    switch (((x>='A')&&(x<='Z'))||((x>='a')&&(x<='z'))){
        case 1: cout<<"The input is an alphabet";break;
        case 0:{ switch ((x>='0')&&(x<='9')){
            case 1: cout<<"The input is a digit";break;
            case 0: cout<<"The input is a special character";break;
        }    
        }
    }
    
    return 0;
}
