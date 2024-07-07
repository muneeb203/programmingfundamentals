#include <iostream>
using namespace std;

bool isWhole(float no) {  
    	if (no-(int)no == 0){ 
        return true; }
	else  {
    	return false;
    	} 
} 
bool isPos(int no) { 
    if(no>0){ 
    return true;} 
    else{
    return false;}
} 
int fact(int n) { 
    if (n==1||n==0)
    return 1;
    else  
    return n * fact(n - 1); 
}
