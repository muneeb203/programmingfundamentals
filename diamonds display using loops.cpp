#include<iostream>

using namespace std;
int main()
{
int x,y,i,j,n;
cout<<"No of Dimonds?";                          
cin>>x;
cout<<"Max no. to be displayed?";
cin>>y;

 for(i=1;i<y;i++)
    {
        for(n=1;n<=x;n++)
       {
          for(j=i;j<y;j++){
              cout<<" ";}
             
            for(j=i;j>=1;j--){
              cout<<j;}
           
            for(j=1;j<=i;j++){
              cout<<j;}
           
            for(j=y;j>i;j--){
              cout<<" ";} }
        cout<<endl;
    }
       
        for(i=y;i>=1;i--)
        {
             for(n=1;n<=x;n++)
            {
               
                for(j=i;j<y;j++){
                  cout<<" ";}
               
                for(j=i;j>=1;j--){
                    cout<<j;}
                
                for(j=1;j<=i;j++){      
                    cout<<j;}
               
                for(j=y;j>i;j--){         
                   cout<<" ";}
		}
                cout<<endl;
        }

	return 0;
	}
