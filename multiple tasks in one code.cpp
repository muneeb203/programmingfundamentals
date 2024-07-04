#include<iostream>

using namespace std; 
void showChoices();
void task2();
void task3();
void task4();

int main(){

showChoices();



return 0;
}




		void showChoices(){
		int a;
		cout<<"Press 1 for task 1"<<endl;
		cout<<"Press 2 for task 2"<<endl;
		cout<<"Press 3 for task 3"<<endl;
		cout<<"Press 4 for task 4"<<endl;
		cin>>a;
		switch (a){
		case 1:  break;
		
		case 2: task2();
break;
		
		case 3: task3();
break;
		case 4: task4();
break;
		//default: cout<<"ERROR!!!!!!!!";
		}
		}
		

		

		void task2(){
			cout<<"Ibn Mas'ud reported: The Messenger of Allah, peace and blessings upon him, said""\n The believer does not insults other, does not curse others, is not vulgar, and is not shameless.\n Source: Sunan al-Tirmidhi 1977, Grade: Sahih"<<endl;
		}


		void task3(){
		float arr[]={32.20,41.88,16.12,23.88, 7.21};
		float a,b;
float total=0;
		sizeof(arr);
		sizeof(float);
		a=sizeof(arr)/sizeof(float);
		//cout<<a<<endl;
		
		for(int i=0;i<=a;i++){
		cout<<arr[i];
		b=arr[i]/2.0;
		cout<<"       No after division="<<b<<endl;
		b=arr[i];		
		total=total+b;
		}
		cout<<"Sum="<<total<<endl;
		
		}





void task4(){
int largest;
int smallest;

int array[6]={4,8,6,3,2};

for(int i=0;i<5;i++){
if ((array[i]>=array[0])&&(array[i]>=array[1])&&(array[i]>=array[2])&&(array[i]>=array[3])&&(array[i]>=array[4]))
cout<<"Greatest valus is   "<<array[i];}






}





	



	

























































		

