//Muneeb ur Rehman Quresi
//DS-B
//22I-1965


#include <iostream>
#include<string>
using namespace std;
int main() {
    int a,b,c,d,e,f,g,h,i,j,k,l,m;
    string x;
    cout<<"Enter name of student:";
    cin>>x;
    cout<<"enter your cnic(without dashes):";
    string y;
    cin>>y;
    
    //if(y[13]>=1 && y[13]<=5)
    //{
    
    	cout<<"Helloo"<<y[0]<<endl;
    //}
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cin>>f;
    cin>>g;
    cin>>h;
    cin>>i;
    cin>>j;
    cin>>k;
    cin>>l;
    cin>>m;
    
  
    
    
    if ((m>=1)&&(m<=5))
        cout<<"Gender of "<<x<<" is male"<<endl;
        else 
        cout<<"Gender of "<<x<<" is female"<<endl;
        
    if (a==1){
        cout<<"Province of "<<x<<" is Islamabad"<<endl;
            if ((b==1)||(b==2))
            cout<<"Division of "<<x<<" is Zone-I"<<endl;
            else if ((b==3)||(b==4))
            cout<<"Division of "<<x<<" is Zone-II"<<endl;
            else if ((b==5)||(b==6))
            cout<<"Division of "<<x<<" is Zone-III"<<endl;
            else if  ((b==7)||(b==8))
            cout<<"Division of "<<x<<" is Zone-IV"<<endl;
            else 
            cout<<"Division of "<<x<<" is Zone-V"<<endl;}
    else if ((a==1)||(a==2)){
        cout<<"Province of "<<x<<" is Punjab"<<endl;
            if (b==1)
            cout<<"Division of "<<x<<" is Rawalpindi"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Rawalpindi-I"<<endl;
                        if ((d==1)||(d==2))
                        cout<<"Tehsil of "<<x<<" is Rawalpindi-A";
                                if ((e==1)||(e==2))
                                cout<<"Union council of "<<x<<" is UC-1";
                                else if ((e==3)||(e==4))
                                cout<<"Union council of "<<x<<" is UC-2";
                                else if ((e==5)||(e==6))
                                cout<<"Union council of "<<x<<" is UC-3";
                                else if ((e==7)||(e==8))
                                cout<<"Union council of "<<x<<" is UC-4";
                                else 
                                cout<<"Union council of "<<x<<" is UC-5";
                        else if ((d==3)||(d==4))
                        cout<<"Tehsil of "<<x<<" is Rawalpindi-B";
                                if ((e==1)||(e==2))
                                cout<<"Union council of "<<x<<" is UC-6";
                                else if ((e==3)||(e==4))
                                cout<<"Union council of "<<x<<" is UC-7";
                                else if ((e==5)||(e==6))
                                cout<<"Union council of "<<x<<" is UC-8";
                                else if ((e==7)||(e==8))
                                cout<<"Union council of "<<x<<" is UC-9";
                                else 
                                cout<<"Union council of "<<x<<" is UC-10";            
                    
                        else if ((d==5)||(d==6))
                        cout<<"Tehsil of "<<x<<" is Rawalpindi-C";
                                if ((e==1)||(e==2))
                                cout<<"Union council of "<<x<<" is UC-11";
                                else if ((e==3)||(e==4))
                                cout<<"Union council of "<<x<<" is UC-12";
                                else if ((e==5)||(e==6))
                                cout<<"Union council of "<<x<<" is UC-13";
                                else if ((e==7)||(e==8))
                                cout<<"Union council of "<<x<<" is UC-14";
                                else 
                                cout<<"Union council of "<<x<<" is UC-15";
                        else if ((d==7)||(d==8))
                        cout<<"Tehsil of "<<x<<" is Rawalpindi-D";
                                if ((e==1)||(e==2))
                                cout<<"Union council of "<<x<<" is UC-16";
                                else if ((e==3)||(e==4))
                                cout<<"Union council of "<<x<<" is UC-17";
                                else if ((e==5)||(e==6))
                                cout<<"Union council of "<<x<<" is UC-18";
                                else if ((e==7)||(e==8))
                                cout<<"Union council of "<<x<<" is UC-19";
                                else 
                                cout<<"Union council of "<<x<<" is UC-20";
                        else 
                        cout<<"Tehsil of "<<x<<" is Rawalpindi-E";
                                if ((e==1)||(e==2))
                                cout<<"Union council of "<<x<<" is UC-21";
                                else if ((e==3)||(e==4))
                                cout<<"Union council of "<<x<<" is UC-22";
                                else if ((e==5)||(e==6))
                                cout<<"Union council of "<<x<<" is UC-23";
                                else if ((e==7)||(e==8))
                                cout<<"Union council of "<<x<<" is UC-24";
                                else 
                                cout<<"Union council of "<<x<<" is UC-25";
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Rawalpindi-II "<<endl;
                        if ((d==1)||(d==2))
                        cout<<"Tehsil of "<<x<<" is Rawalpindi-F";
                                if ((e==1)||(e==2))
                                cout<<"Union council of "<<x<<" is UC-26";
                                else if ((e==3)||(e==4))
                                cout<<"Union council of "<<x<<" is UC-27";
                                else if ((e==5)||(e==6))
                                cout<<"Union council of "<<x<<" is UC-28";
                                else if ((e==7)||(e==8))
                                cout<<"Union council of "<<x<<" is UC-29";
                                else 
                                cout<<"Union council of "<<x<<" is UC-30";
                        else if ((d==3)||(d==4))
                        cout<<"Tehsil of "<<x<<" is Rawalpindi-G";
                                if ((e==1)||(e==2))
                                cout<<"Union council of "<<x<<" is UC-31";
                                else if ((e==3)||(e==4))
                                cout<<"Union council of "<<x<<" is UC-32";
                                else if ((e==5)||(e==6))
                                cout<<"Union council of "<<x<<" is UC-33";
                                else if ((e==7)||(e==8))
                                cout<<"Union council of "<<x<<" is UC-34";
                                else 
                                cout<<"Union council of "<<x<<" is UC-35";
                        else if ((d==5)||(d==6))
                        cout<<"Tehsil of "<<x<<" is Rawalpindi-H";
                                if ((e==1)||(e==2))
                                cout<<"Union council of "<<x<<" is UC-36";
                                else if ((e==3)||(e==4))
                                cout<<"Union council of "<<x<<" is UC-37";
                                else if ((e==5)||(e==6))
                                cout<<"Union council of "<<x<<" is UC-38";
                                else if ((e==7)||(e==8))
                                cout<<"Union council of "<<x<<" is UC-39";
                                else 
                                cout<<"Union council of "<<x<<" is UC-40";
                        else if ((d==7)||(d==8))
                        cout<<"Tehsil of "<<x<<" is Rawalpindi-I";
                                if ((e==1)||(e==2))
                                cout<<"Union council of "<<x<<" is UC-41";
                                else if ((e==3)||(e==4))
                                cout<<"Union council of "<<x<<" is UC-42";
                                else if ((e==5)||(e==6))
                                cout<<"Union council of "<<x<<" is UC-43";
                                else if ((e==7)||(e==8))
                                cout<<"Union council of "<<x<<" is UC-44";
                                else 
                                cout<<"Union council of "<<x<<" is UC-45";
                        else 
                        cout<<"Tehsil of "<<x<<" is Rawalpindi-J";
                                if ((e==1)||(e==2))
                                cout<<"Union council of "<<x<<" is UC-46";
                                else if ((e==3)||(e==4))
                                cout<<"Union council of "<<x<<" is UC-47";
                                else if ((e==5)||(e==6))
                                cout<<"Union council of "<<x<<" is UC-48";
                                else if ((e==7)||(e==8))
                                cout<<"Union council of "<<x<<" is UC-49";
                                else 
                                cout<<"Union council of "<<x<<" is UC-50";
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Rawalpindi-III"<<endl;
                    if ((d==1)||(d==2))
                    cout<<"Tehsil of "<<x<<" is Rawalpindi-K";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-51"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-52"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-53"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-54"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-55"<<endl;
                    else if ((d==3)||(d==4))
                    cout<<"Tehsil of "<<x<<" is Rawalpindi-L";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-56"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-57"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-58"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-59"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-60"<<endl;
                    else if ((d==5)||(d==6))
                    cout<<"Tehsil of "<<x<<" is Rawalpindi-M";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-61"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-62"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-63"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-64"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-65"<<endl;
                    else if ((d==7)||(d==8))
                    cout<<"Tehsil of "<<x<<" is Rawalpindi-N";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-66"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-67"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-68"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-69"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-70"<<endl;
                    else 
                    cout<<"Tehsil of "<<x<<" is Rawalpindi-O";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-71"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-72"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-73"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-74"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-75"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Rawalpindi-IV"<<endl;
                    if ((d==1)||(d==2))
                    cout<<"Tehsil of "<<x<<" is Rawalpindi-P";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-76"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-77"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-78"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-79"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-80"<<endl;
                    else if ((d==3)||(d==4))
                    cout<<"Tehsil of "<<x<<" is Rawalpindi-Q";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-81"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-82"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-83"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-84"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-85"<<endl;
                    else if ((d==5)||(d==6))
                    cout<<"Tehsil of "<<x<<" is Rawalpindi-R";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-86"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-87"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-88"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-89"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-90"<<endl;
                    else if ((d==7)||(d==8))
                    cout<<"Tehsil of "<<x<<" is Rawalpindi-S";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-91"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-92"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-93"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-94"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-95"<<endl;
                    else 
                    cout<<"Tehsil of "<<x<<" is Rawalpindi-T";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-96"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-97"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-98"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-99"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-100"<<endl;
                else
                cout<<"District of "<<x<<" is Rawalpindi-V"<<endl;
                    if ((d==1)||(d==2))
                    cout<<"Tehsil of "<<x<<" is Rawalpindi-U";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-101"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-102"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-103"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-104"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-105"<<endl;
                    else if ((d==3)||(d==4))
                    cout<<"Tehsil of "<<x<<" is Rawalpindi-V";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-106"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-107"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-108"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-109"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-110"<<endl;
                    else if ((d==5)||(d==6))
                    cout<<"Tehsil of "<<x<<" is Rawalpindi-W";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-111"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-112"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-113"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-114"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-115"<<endl;
                    else if ((d==7)||(d==8))
                    cout<<"Tehsil of "<<x<<" is Rawalpindi-X";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-116"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-117"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-118"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-119"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-120"<<endl;
                    else 
                    cout<<"Tehsil of "<<x<<" is Rawalpindi-Y";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-121"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-122"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-123"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-124"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-125"<<endl;
                
    }
            else if (b==2){
            cout<<"Division of "<<x<<" is Bahawalpur"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Bahawalpur-I"<<endl;
                        if ((d==1)||(d==2))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-A";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-126"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-127"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-128"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-129"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-130"<<endl;
                    else if ((d==3)||(d==4))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-B";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-131"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-132"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-133"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-134"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-135"<<endl;
                    else if ((d==5)||(d==6))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-C";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-136"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-137"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-138"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-139"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-140"<<endl;
                    else if ((d==7)||(d==8))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-D";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-141"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-142"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-143"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-144"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-145"<<endl;
                    else 
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-E";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-146"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-147"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-148"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-149"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-150"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Baahawalpur-II"<<endl;
                            if ((d==1)||(d==2))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-F";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-151"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-152"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-153"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-154"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-155"<<endl;
                    else if ((d==3)||(d==4))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-G";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-156"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-157"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-158"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-159"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-160"<<endl;
                    else if ((d==5)||(d==6))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-H";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-161"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-162"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-163"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-164"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-165"<<endl;
                    else if ((d==7)||(d==8))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-I";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-166"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-167"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-168"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-169"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-170"<<endl;
                    else 
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-J";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-171"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-172"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-173"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-174"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-175"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Bahawalpur-III"<<endl;
                        if ((d==1)||(d==2))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-K";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-176"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-177"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-178"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-179"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-180"<<endl;
                    else if ((d==3)||(d==4))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-L";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-181"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-182"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-183"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-184"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-185"<<endl;
                    else if ((d==5)||(d==6))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-M";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-186"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-187"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-188"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-189"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-190"<<endl;
                    else if ((d==7)||(d==8))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-N";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-191"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-192"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-193"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-194"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-195"<<endl;
                    else 
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-O";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-196"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-197"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-198"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-199"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-200"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Bahawalpur-IV"<<endl;
                            if ((d==1)||(d==2))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-P";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-201"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-202"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-203"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-204"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-205"<<endl;
                    else if ((d==3)||(d==4))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-R";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-206"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-207"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-208"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-209"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-210"<<endl;
                    else if ((d==5)||(d==6))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-S";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-211"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-212"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-213"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-214"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-215"<<endl;
                    else if ((d==7)||(d==8))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-T";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-216"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-217"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-218"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-219"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-220"<<endl;
                    else 
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-U";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-221"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-222"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-223"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-224"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-225"<<endl;
                else 
                cout<<"District of "<<x<<" is Bahawalpur-V"<<endl;
                        if ((d==1)||(d==2))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-V";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-226"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-227"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-228"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-229"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-230"<<endl;
                    else if ((d==3)||(d==4))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-W";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-231"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-232"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-233"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-234"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-235"<<endl;
                    else if ((d==5)||(d==6))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-X";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-236"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-237"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-238"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-239"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-240"<<endl;
                    else if ((d==7)||(d==8))
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-Y";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-241"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-242"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-243"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-244"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-245"<<endl;
                    else 
                    cout<<"Tehsil of "<<x<<" is Bahawalpur-Z";
                            if ((e==1)||(e==2))
                            cout<<"Union council of "<<x<<" is UC-246"<<endl;
                            else if ((e==3)||(e==4))
                            cout<<"Union council of "<<x<<" is UC-247"<<endl;
                            else if ((e==5)||(e==6))
                            cout<<"Union council of "<<x<<" is UC-248"<<endl;
                            else if ((e==7)||(e==8))
                            cout<<"Union council of "<<x<<" is UC-249"<<endl;
                            else 
                            cout<<"Union council of "<<x<<" is UC-250"<<endl;
            }
                
            else if (b==3)
            cout<<"Division of "<<x<<" is Lahore"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Lahore-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Lahore-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Lahore-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Lahore-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Lahore-V"<<endl;
                
            else if  (b==4){
            cout<<"Division of "<<x<<" is Gugranwala"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Gugranwala-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Gugranwala-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Gugranwala-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Gugranwala-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Gugranwala-V"<<endl;}
                
            else if (b==5){
            cout<<"Division of "<<x<<" is Faisalabad"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Faisalabad-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Faisalabad-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Faisalabad-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Faisalabad-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Faisalabad-V"<<endl;}
                
            else if (b==6){
            cout<<"Division of "<<x<<" is Sahiwal"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Sahiwal-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Sahiwal-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Sahiwal-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Sahiwal-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Sahiwal-V"<<endl;
            }
            else if (b==7){
            cout<<"Division of "<<x<<" is Rahim yar Khan"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Rahim yar Khan-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Rahim yar Khan-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Rahim yar Khan-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Rahim yar Khan-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Rahim yar Khan-V"<<endl;}
                
            else if  (b==8)
            cout<<"Division of "<<x<<" is Gugranwala"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Gugranwala-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Gugranwala-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Gugranwala-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Gugranwala-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Gugranwala-V"<<endl;
                
            else 
            cout<<"Division of "<<x<<" is Multan"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Multan-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Multan-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Multan-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Multan-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Multan-V"<<endl;
                
    }
    else if ((a==3)||(a==4)){
        cout<<"Province of "<<x<<" is Sindh"<<endl;
        if (b==1)
            cout<<"Division of "<<x<<" is Larkana"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Larkana-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Larkana-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Larkana-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Larkana-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Larkana-V"<<endl;
            else if (b==2)
            cout<<"Division of "<<x<<" is Karachi"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Karachi-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Karachi-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Karachi-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Karachi-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Karachi-V"<<endl;
            else if (b==3)
            cout<<"Division of "<<x<<" is Mir pur Khaas"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Mir pur Khaas-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Mir pur Khaas-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Mir pur Khaas-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Mir pur Khaas-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Mir pur Khaas-V"<<endl;
            else if  (b==4)
            cout<<"Division of "<<x<<" is Hyrerabad"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Hyrerabad-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Hyrerabad-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Hyrerabad-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Hyrerabad-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Hyrerabad-V"<<endl;
            else if (b==5)
            cout<<"Division of "<<x<<" is Sukkur"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Sukkur-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Sukkur-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Sukkur-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Sukkur-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Sukkur-V"<<endl;
            else if (b==6)
            cout<<"Division of "<<x<<" is Shaheed Benazirabad"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Shaheed Benazirabad-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Shaheed Benazirabad-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Shaheed Benazirabad-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Shaheed Benazirabad-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Shaheed Benazirabad-V"<<endl;
            else 
            cout<<"Division of "<<x<<" is Banbhore"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Banbhore-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Banbhore-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Banbhore-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Banbhore-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Banbhore-V"<<endl;
    }
    else if ((a==5)||(a==6)){
        cout<<"Province of "<<x<< "is Balochistan"<<endl;
            if (b==1)
            cout<<"Division of "<<x<<" is Kalat"<<endl;
                   if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Kalat-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Kalat-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Kalat-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Kalat-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Kalat-V"<<endl
                
            else if (b==2)
            cout<<"Division of "<<x<<" is Makran"<<endl;
                   if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Makran-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Makran-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Makran-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Makran-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Makran-V"<<endl
            else if (b==3)
            cout<<"Division of "<<x<<" is Nasirabad"<<endl;
                   if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Nasirabad-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Nasirabad-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Nasirabad-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Nasirabad-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Nasirabad-V"<<endl
            else if  (b==4)
            cout<<"Division of "<<x<<" is Rakshan"<<endl;
                   if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Rakshan-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Rakshan-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Rakshan-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Rakshan-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Rakshan-V"<<endl
            else if (b==5)
            cout<<"Division of "<<x<<" is Sibbi"<<endl;
                   if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Sibbi-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Sibbi-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Sibbi-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Sibbi-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Sibbi-V"<<endl
            else if (b==6)
            cout<<"Division of "<<x<<" is Zohb"<<endl;
                   if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Zohb-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Zohb-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Zohb-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Zohb-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Zohb-V"<<endl;
            else
            cout<<"Division of "<<x<<" is Queeta"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Queeta-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Queeta-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Queeta-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Queeta-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Queeta-V"<<endl;
}
    else if ((a==7)&&(a==8)){
        cout<<"Province of "<<x<< "is KPK"<<endl;
        if (b==1)
            cout<<"Division of "<<x<<" is Bajur"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Bajur-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Bajur-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Bajur-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Bajur-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Bajur-V"<<endl;
            else if (b==2)
            cout<<"Division of "<<x<<" is Banur"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Banur-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Banur-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Banur-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Banur-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Banur-V"<<endl;
            else if (b==3)
            cout<<"Division of "<<x<<" is Lower Chitral"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Lower Chitral-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Lower Chitral-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Lower Chitral-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Lower Chitral-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Lower Chitral-V"<<endl;
            else if  (b==4)
            cout<<"Division of "<<x<<" is Lower Dir"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Lower Dir-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Lower Dir-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Lower Dir-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Lower Dir-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Lower Dir-V"<<endl;
            else if (b==5)
            cout<<"Division of "<<x<<" is Malakand"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Malakand-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Malakand-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Malakand-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Malakand-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Malakand-V"<<endl;
            else if (b==6)
            cout<<"Division of "<<x<<" is Shangala"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Shangala-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Shangala-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Shangala-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Shangala-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Shangala-V"<<endl;
            else if (b==7)
            cout<<"Division of "<<x<<" is Swat"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Swat-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Swat-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Swat-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Swat-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Swat-V"<<endl;
            else if  (b==8)
            cout<<"Division of "<<x<<" is Upper Chitral"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Upper Chitral-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Upper Chitral-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Upper Chitral-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Upper Chitral-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Upper Chitral-V"<<endl;
            else 
            cout<<"Division of "<<x<<" is Peshawar"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Peshawar-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Peshawar-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Peshawar-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Peshawar-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Peshawar-V"<<endl;
    }
        else {
        cout<<"Province of "<<x<<" is Gilgit"<<endl;
            if ((b==1)||(b==2))
            cout<<"Division of "<<x<<" is Gilgit"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Gilgit-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Gilgit-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Gilgit-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Gilgit-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Gilgit-V"<<endl;
            else if ((b==3)||(b==4))
            cout<<"Division of "<<x<<" is Ghizer"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Ghizer-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Ghizer-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Ghizer-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Ghizer-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Ghizer-V"<<endl;
            else if ((b==5)||(b==6))
            cout<<"Division of "<<x<<" is Gupis-Yasin"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Gupis-Yasin-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Gupis-Yasin-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Gupis-Yasin-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Gupis-Yasin-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Gupis-Yasin-V"<<endl;
            else if  ((b==7)||(b==8))
            cout<<"Division of "<<x<<" is Hunza"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Hunza-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Hunza-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Hunza-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Hunza-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Hunza-V"<<endl;
            else 
            cout<<"Division of "<<x<<" is Nagar"<<endl;
                if ((c==1)||(c==2))
                cout<<"District of "<<x<<" is Nagar-I"<<endl;
                else if ((c==3)||(c==4))
                cout<<"District of "<<x<<" is Nagar-II"<<endl;
                else if ((c==5)||(c==6))
                cout<<"District of "<<x<<" is Nagar-III"<<endl;
                else if ((c==7)||(c==8))
                cout<<"District of "<<x<<" is Nagar-IV"<<endl;
                else 
                cout<<"District of "<<x<<" is Nagar-V"<<endl;
        }
            
        
        
        
        
 
    

    return 0;}
