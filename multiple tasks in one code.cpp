// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int task2();
int task3();
int task4();
int task5();
int task6();
int task7();
void insertInto(int arr[][5]);	
int display(int arr[][5]);
int main() {
   int x;
   cout<<"Enter the program you want to run"<<endl;
   cin>>x;
    switch(x){
            case 1: break;
            case 2: {task2();
                        break;}
            case 3: {task3();
                        break;}
            case 4: {task4();
                        break;}
            case 5: {task5();
                        break;}
            case 6: {task6();
                        break;}
            case 7: {task7();
                        break;}
}
    return 0;
}



int task2(){
       	int arr[5][5]={};
	 insertInto(arr);	

return 0;
}

void insertInto(int arr[][5]){
	
	cout<<"Enter values in arr";
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
		cin>>arr[i][j];
		}
	}
	int a;
	cout<<"pRESS 1 FOR DISPLAYING MATRIX"<<endl;
	cin>>a;
	if (a==1)
	display(arr);
	else 
	cout<<"Wrong input!!!"<<endl;
	
	
}

int display(int arr[][5]){

cout<<"arr is="<<endl;

for(int i=0;i<5;i++){
for(int j=0;j<5;j++){
cout<<arr[i][j]<<"  ";
}
cout<<endl;
}
return 0;
}




int task3(){
return 0;

}

int task4(){
return 0;

}
int task5(){
return 0;

}
int task6(){
    int order;
    int mat[][];
    cout<<"FINDING THE SUM OF DIAGONAL ENTERIES OF THE MATRIX"<<endl;
    cout<<"Enter the enteries of matrix";
    cout<<"Enter the order of square matrix";
    cin>>order;
    if (order<5){
    for(int i=0;i<order;i++){
        for(int j=0;j<order;j++){s
            cin>>mat[order][order];
            cout<<mat[order][order]<<" ";
        }
        cout<<endl;
    }
    
    }
    else 
    cout<<"wRONG INPUT!!!";
    
    for(int i=0;i<order;i++){
    	for(int j=0;j<order;j++){
    		if(i==j){
	`	count=count+mat[order][order];		}    		
    }
    }
    cout<<"Sum of diagonal enteries is="<<"  "<<count<<endl;
    
    
return 0;

}
int task7(){
return 0;

}






