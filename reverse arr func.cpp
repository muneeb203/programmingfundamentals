#include <iostream>
using namespace std;

int *reverseArray(int Array[]) 
{   
             int x=5;
    int a= 0;
        int b= x- 1; 
  
    while (a < b)
 { 
        int c= Array[a];  
        Array[a] = Array[b]; 
        Array[b] =c ; 
        a++; 
        b--; }
   
  return Array;
}
