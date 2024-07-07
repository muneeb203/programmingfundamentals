#include<iostream>
using namespace std;
int sumArray(int array[],int x){
	int max=0;
	
	for(int i=0;i<x;i++){
		if (array[i]>max){
		max=array[i];
		}
		else
		continue;
	}
	return max;
}

