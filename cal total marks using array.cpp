#include<iostream>
using namespace std;
	int main(){
	int marks[15];
	int sum=0,average;
	for(int i=0;i<=15;i++){
		cout<<"Enter marks=";
		cin>>marks[i];
		sum=sum+marks[i];
}
	cout<<"Total marks"<<sum<<endl;
	average=sum/15;
	cout<<"Average="<<average<<endl;
	return 0;
}
