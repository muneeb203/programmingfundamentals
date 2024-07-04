#include<iostream>
using namespace std;
int main(){
       int image[7][7];
       cout<<"Enter the no in the matrix"<<endl;
       for(int i=0;i<7;i++){
       	for(int j=0;j<7;j++){
       		cout<<"Enter no at row "<<i<<" and column "<<j<<endl;
       		cin>>image[i][j];
       	}
       }
		cout<<"orignal matrix is: "<<endl;
		//displaying matrix
		for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			cout<<image[i][j]<<"  ";
		}
		cout<<endl;
		}
		int sum=0;
		int n=3;
		int Convoled_mat[3][3];
		for(int i=0;i<n;i+2){
			for(int j=0;j<3;j++){
				for(int k=0;k<j;k++){
					if(((j==1)&&(k==1))||((j==1)&&(k==3))||((j==2)&&(k==2))||((j==3)&&(k==1))||((j==3)&&(k==3)))
					sum=sum+image[i][j];
					else
					sum=image[i][j]*0;
					
					sum=sum+0;	
				}
				//cout<<"convoled feature of matrix is:"<<endl; 
				cout<<sum<<" ";
			}
		cout<<endl;
		n=n+2;
		if(n>=7)
		break;
		
		
		}
		
		int kernal[3][3];
		cout<<"the kernal matrix is:"<<endl;		
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
					if(((i==1)&&(j==1))||((i==1)&&(j==3))||((i==2)&&(j==2))||((i==3)&&(j==1))||((i==3)&&(j==3))){
					
					kernal[i][j]=1;}
					else
					kernal[i][j]=0;
		}}
		//displaying kernal matrix
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<kernal[i][j]<<" "; 
			}
		cout<<endl;
		}
		
		
		
		
				
}
