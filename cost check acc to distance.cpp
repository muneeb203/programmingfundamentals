using namespace std;
int main()
{
    int x,y;
    cout<<"distance=";
    cin>>x;
    
    if ((x>=0)&&(x<=100)) 
    cout<<"cost is 5$";
    else if ((x>100)&&(x<500))
    cout<<"cost is 8$";
    else if ((x>=500)&&(x<1000))
    cout<<"cost is 10$";
    else 
    cout<<"cost is 12$";
    
    
    
    return 0;
}
