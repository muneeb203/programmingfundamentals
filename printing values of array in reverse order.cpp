//program_1

#include <iostream>
using namespace std;

int main(){
int M, i;
cout<<"Enter size of array: ";
cin>>M;

int *array = new int[M];

for(i = 0; i < M; i++){
cout<<"array["<<i<<"]= ";
cin>>*(array+i);
}

cout<<"\nValues of array\n";
for(i = 0; i < M; i++){
cout<<array[i]<<" "; 
}


cout<<"\nValues of array in reverse order\n";
for(int i=(M-1);i>=0;i--){
    cout<<array[i]<<" ";
}














delete[] array;
return 0;
}


