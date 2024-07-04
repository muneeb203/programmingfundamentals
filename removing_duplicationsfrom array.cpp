#include<iostream>
using namespace std;
void Remove_dublicates();

int main(){

Remove_dublicates();

}



void Remove_dublicates(){

int no,m,j,count=0,check=0;
int* array[no];

cout<<"Enter no of cells in the array"<<endl;
cin>>no;

for(int i=1;i<=no;i++){
cout<<"Enter "<<i<<" value"<<endl;
cin>>*array[i];

} 

cout<<"Lets check wheather there is any dublicate value in the program or not?"<<endl;
for(int i=0;i<no;i++){
	for(j=0;j<no;j++){
		if (*array[j]==*array[i]){
			cin>>*array[j];
			count++;
			if(count==2)
			continue;
			}
		else
		continue;	
	}
	check++;
	}
	
cout<<"The array after removing dublications is "<<endl;
for(int display=0;display<=check;display++){
	cout<<*array[j]<<" ";

}

}
