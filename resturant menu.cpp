#include<iostream>
using namespace std;
int main(){
    int quan,tot,i=0,amount,netam=0,gst;
    string name;
    long int no;
    cout<<"1";
    cout<<"  "<<"Biryani"<<"  "<<"Rs 150"<<endl;
    
    cout<<"2";
    cout<<"  "<<"Rice"<<"  "<<"Rs 170"<<endl;
    
    cout<<"3";
    cout<<"  "<<"Burger"<<"  "<<"Rs 130"<<endl;
    
    cout<<"4";
    cout<<"  "<<"Koftay"<<"  "<<"Rs 190"<<endl;
    
    cout<<"5";
    cout<<"  "<<"Showarma"<<"  "<<"Rs 110"<<endl;
    
     cout<<"6";
    //cin>>x6;
    cout<<"  "<<"Momos"<<"  "<<"Rs 100"<<endl;
    
    cout<<"7";
//    cin>>x7;
    cout<<"  "<<"Macronies"<<"  "<<"Rs 160"<<endl;
    
    cout<<"8";
  //  cin>>x8;
    cout<<"  "<<"Spaggeties"<<"  "<<"Rs 130"<<endl;
    
    cout<<"9";
    //cin>>x9;
    cout<<"  "<<"Daal"<<"  "<<"Rs 90"<<endl;
    
    cout<<"10";
    //cin>>x10;
    cout<<"  "<<"Qeema"<<"  "<<"Rs 200"<<endl;
    
        cout<<"11";
    //cin>>x11;
    cout<<"  "<<"Beef Biryani"<<"  "<<"Rs 120"<<endl;
    
    cout<<"12";
    //cin>>x12;
    cout<<"  "<<"Chinese Rice"<<"  "<<"Rs 210"<<endl;
    
    cout<<"13";
    //cin>>x13;
    cout<<"  "<<"Zinger Burger"<<"  "<<"Rs 250"<<endl;
    
    cout<<"14";
    //cin>>x14;
    cout<<"  "<<"Anda Koftay"<<"  "<<"Rs 220"<<endl;
    
    cout<<"15";
    //cin>>x15;
    cout<<"  "<<"Chicken Cheeze Showarma"<<"  "<<"Rs 220"<<endl;
    
 cout<<"16";
    //cin>>x16;
    cout<<"  "<<"Karahi"<<"  "<<"Rs 350"<<endl;
    
    cout<<"17";
    //cin>>x7;
    cout<<"  "<<"Sandwiches"<<"  "<<"Rs 120"<<endl;
    
    cout<<"18";
    //cin>>x18;
    cout<<"  "<<"Pizza"<<"  "<<"Rs 550"<<endl;
    
    cout<<"19";
    cout<<"  "<<"Patties"<<"  "<<"Rs 80"<<endl;
    
    cout<<"20";
    cout<<"  "<<"Aloo Qeema"<<"  "<<"Rs 240"<<endl;
    
    cout<<"Enter your name=";
    cin>>name;
    cout<<"Enter your mobile no=";
    cin>>no;
    
      int j;
   /// int count;
   
    do{
         int count=0;
           
    
       do{
cout<<"Select dish=";
   cin>>j;
        if(j==1){
        cout<<"Biryani"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*150;
cout<<"Total="<<tot<<endl;
        amount=tot;
        cout<<endl;
     }
    else if(j==2){
        cout<<"Rice"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*150;
        cout<<"Total="<<tot<<endl;
        amount=tot;
         cout<<endl;
     }
      else if(j==3){
        cout<<"Burger"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*130;
        cout<<"Total="<<tot<<endl;
     amount=tot;
      cout<<endl;
          
      }
      else if(j==4){
        cout<<"Koftay"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*190;
        cout<<"Total="<<tot<<endl;
     amount=tot;
      cout<<endl;
          
      }
      else if(j==5){
        cout<<"Showarma"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*110;
        cout<<"Total="<<tot<<endl;
     amount=tot;
          cout<<endl;
      }
      else if(j==6){
        cout<<"Momos"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*100;
        cout<<"Total="<<tot<<endl;
     amount=tot;
          cout<<endl;
      }
      else if(j==7){
        cout<<"Macronies"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*160;
        cout<<"Total="<<tot<<endl;
     amount=tot;
          cout<<endl;
      }
      else if(j==8){
        cout<<"Spaggeties"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*130;
        cout<<"Total="<<tot<<endl;
     amount=tot;
          cout<<endl;
      }
      else if(j==9){
        cout<<"Daal"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*90;
        cout<<"Total="<<tot<<endl;
     amount=tot;
     cout<<endl;
    
          
      }
      else if(j==10){
        cout<<"Qeema"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*200;
        cout<<"Total="<<tot<<endl;
    amount=tot; 
          cout<<endl;
      }
      else if(j==11){
        cout<<"Beef Biryani"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*130;
        cout<<"Total="<<tot<<endl;
     amount=tot;
          cout<<endl;
      }
     else if(j==12){
        cout<<"Chinese Rice"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*210;
        cout<<"Total="<<tot<<endl;
     amount=tot;
         cout<<endl;
     }
     else if(j==13){
        cout<<"Zinger Burger"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*250;
        cout<<"Total="<<tot<<endl;
     amount=tot;
         cout<<endl;
     }
     else if(j==14){
        cout<<"Anda Koftay"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*220;
        cout<<"Total="<<tot<<endl;
     amount=tot;
         cout<<endl;
     }
     else if(j==15){
        cout<<"Chicken Chinese Showarma"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*220;
        cout<<"Total="<<tot<<endl;
     amount=tot;
         cout<<endl;
     }
     else if(j==16){
        cout<<"Karahi"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*350;
        cout<<"Total="<<tot<<endl;
     amount=tot;
         cout<<endl;
     }
     else if(j==17){
        cout<<"Sandwiches"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*120;
        cout<<"Total="<<tot<<endl;
     amount=tot;
         cout<<endl;
     }
     else if(j==18){
        cout<<"Pizza"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*550;
        cout<<"Total="<<tot<<endl;
     amount=tot;
         cout<<endl;
     }
     else if(j==19){
        cout<<"Patties"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*80;
        cout<<"Total="<<tot<<endl;
     amount=tot;
         cout<<endl;
     }
     else if(j==20){
        cout<<"Aloo qeema"<<endl;
        cout<<"Quantity=";
        cin>>quan;
        tot=quan*240;
        cout<<"Total="<<tot<<endl;
     amount=tot;
         cout<<endl;
     }
     count++;
           netam=netam+amount;
       }while(count<=5);
        }while(j>=20);
        cout<<"Total amount to be paid:"<<netam<<endl;
        gst=netam*0.12;
        cout<<"Gst"<<gst<<endl;
        cout<<"Net total="<<gst+netam<<endl;
    
 return 0;   
}
